# 23 - 1. 파일 하고 이야기 하기 (파일 입출력에 대한 기본적 이해)
- 파일 입출력이란 무엇인가, 스트림이란 무엇인가
- fopen, fputs, fgets, fgetchar 함수에 대한 이해
- 파일 위치 지정자와 fseek 함수에 대한 이해
---
'데이터를 어떻게 하면 프로그램이 종료되어도 보관할 수 있을까?'\
-> 특정한 데이터가 있으면 이를 하드디스크에 기록하면 해결된다.
---
RAM 에 상주하는 데이터 -> 컴퓨터가 꺼지게 되면 데이터가 날아가게 되는 __휘발성 메모리__\
하드 디스크 -> 비휘발성 저장매체\
하드 디스크에 데이터를 보관할 땐 __파일__ 의 단위로 데이터를 보관하게 된다.
---
## 파일에 출력하기
```
FILE *fp;
fp = fopen("a.txt", "w");
```
파일 하나를 만드는데 매우 복잡한 과정이 있다. 그 과정은 컴퓨터 운영체제에서 알아서 해준다.\
fopen  함수가 '운영체제가 알아서 해주는 부분' 을 처리한다.\
## 스트림
printf 함수를 이용할 때 어떤 작업이 컴퓨터에서 내부적으로 처리될까?
1. 먼저 출력할 문자열을 구성한다.
2. 이를 모니터에 전달해서 출력하라는 명령을 내리게 해야한다.\
모니터에 명령을 내리기 위해선 모니터를 만든 회사마다 그 방식이 다를 것이고 어떠한 명령을 내려야 하는지도 다르다. 하지만 우린 printf 라는 함수 하나로 이 모든 것을 할 수 있었다.\
그 이뉴는 __스트림__ 에 있다.\
스트림은 완전히 다른 장치들을 이어주는 ___파이프___ 라고 보면된다.\
이러한 스트림은 우리가 직접 구현해야 되는 것이 아니라 운영체제가 스스로 처리해주는 것이다.\
```
스트림을 정확히 표현하면 '추상화된 장치(abstract devices)' 라고 말할 수 있다.
여러가지 주변 장치들(모니터, 키보드, 하드 디스크)을 추상화 시켜서 사용자가 마치 동일한 장치에 접근하는 것 처럼 사용할 수 있게 만들었기 때문.
추상화한 모습은 마치 책장과 같이 만들었다. 책장에 책을 끼우거나 빼는 것 처럼 데이터를 순차적으로 쭉 나열해서 데이터의 끝 까지 차례대로 읽어들일 수 있도록 만들었다.
```
스트림은 __표준 스트림(standard stream)__ 이라 해서 프로그램이 실행될 때 자동으로 생성.\
모니터에 대한 스트림은 stdout, 키보드 stdin.\
stderr(표준 오류 스트림) stdout 하고 거의 동일. -> 단지, 오류 메세지를 출력하는 스트림\
fopen 함수는 만든 스트림을 가리키는 포인터를 리턴.\
스트림에 관한 정보는 FILE 구조체에 들어있다.\
fopen에서 두 번째 인자로 "w"를 전달, 이 말의 의미는 파일에 오직 '쓰기' 많이 가능하게 하겠다라는 의미\
파일이 어떠한 이유에서라든지 열지 못한 경우 fopen 함수는 NULL 을 리턴한다.\
fopen이 실패하게 되었을 경우 검사하지 않는다면 소스 뒷부분에서 어떠한 문제가 발생할지 모르므로 항상 검사하는 것이 중요하다.\
fputs 함수로 파일에 기록할 수 있다.\
첫 번째 인자로 파일에 기록할 문자열을 전달하고, 두 번째 인자로 어떠한 스트림을 택할지 그 포인터를 써주면 된다.\
fopen 함수는 우리가 지정한 파일(a.txt) 과 소통할 수 있도록 스트림을 만들어 준다.
마지막으로 연결됐던 스트림을 닫아 줘야 한다. 만일 fclose로 닫지 않는다면 스트림이 계속 살아 있게 되어 이 파일은 계속 쓰기 상태로 남아있는다.\
이는 프로그램이 종료되기 전까지 이 상태로 남아 있기 떄문에, 마치 동적 메모리 할당에서, free 로 메모리를 반환해 주어야 하는 것처럼 스트림도 닫아줘야한다.
fopen 함수는 우리가 지정한 파일(a.txt) 과 소통할 수 있도록 스트림을 만들어 준다.
## 파일에서 입력 받기
```
fgets(buf, 20, fp);
```
fgets 함수를 통해 파일로 부터 문자열을 입력 받는다.\
첫 번째 인자로 어디에 입력 받을 지, 두 번째 인자로 입력 받을 바이트 수, 세 번째 인자로 어떤 스트림을 통해 입력 받을지 명시해주면된다.\
fgets 의 좋은 점이 입력 받는 양을 제한할 수 있다는 점.\
제한을 두지 않으면 할당된 메모리 크기를 넘어 버리는 오버플로우가 되는 경우가 있지만fseek(fp, 0, SEEK_SET); fgets는 이를 방지할 수 있어 상당히 안정적.\

```
while ((c = fgetc(fp)) != EOF) {
  printf("%c", c);
}
```
fgetc 는 fp 에서 문자 하나를 얻어 온다. 즉, 한 문자씩 읽어들인다. 이 때 문자열 맨 마지막이 NULL 문자로 종료를 나타내는 것 처럼, 파일의 맨 마지막에는 EOF(End Of File) 을 나타내는 값인 -1 이 들어가 있다.
## 파일 위치 지정자
파일에서 입력 받을 때 언제나 파일의 시작 부분에서 끝 부분으로 입력을 쭉 받아 나갔다. 즉, 이전에 입력 받았던 데이터는 다시 입력 받지 않는다. 이것이 가능하게 된 이유는 __파일 위치 지정자__ 때문. 영어로 __Position Indicator__ 라고 한다.\
만약 fgetc로 입력 받을 시,abcdefg가 있다고 하면 파일 위치 지정자는 파일의 맨 첫 부분을 가리키고 있다.\
```
fseek(fp, 0, SEEK_SET);
```
fseek 함수는 fp 를 세 번째 인자로 부터 두 번째 인자 만큼 떨어진 곳으로 파일 위치 짖어자를 돌리는데, 위 경우 SEEK_SET 으로 부터 0 번째 떨어진 곳, 즉 SEEK_SET으로 돌린다고 할 수 있다.\
SEEK_SET 은 파일의 맨 처음을 일컫는 매크로 상수.\
SEEK_SET 외 현재 위치를 표시하는 SEEK_CUR 과 파일의 맨 마지막을 표시하는 SEEK_END 상수들이 있다.\

# 23 - 2. 파일 하고 이야기 하기 (파일 입출력)
- 파일 위치 지시자(File Position Indicator)
- fseek 함수 다루기
- fopen 에서 r+, w+, a, a+ 형태 배우고, 쓰기/읽기 전환 시 문제점에 대해 알기
- fprintf 함수와 fscanf 함수를 사용하기
- 도서 관리 프로그램에 입출력 처리 적용
---
## 파일 위치 지시자 (File Position Indicator)
스트림의 기본 모토 ___순차적으로 입력을 받는다___
즉, 스트림에서 데이터를 입력 받을 때 질서 정연하게 앞에 있는 데이터 먼저 순서대로 읽어 들인다.\
순차적으로 읽어 들이는 것을 가능케 하는 것. -> ___파일 위치 지시자___ \
컴퓨터가 어디까지 읽어들었는지를 알고 이전에 입력 받았던 문자 바로 다음 문자를 입력 받을까?\
-> 다음에 입력 받을 위치를 미리 표시 해놓으면 된다.\
=> __다음에 입력 받아야 할 위치__ 기억 해 놓은 것을 ___파일 위치 지시자___ 가 하는 일.\
파일 위치 지시자는 파일에서 다음에 입력 받을 부분의 위치를 가리키고 있다.\
C 언어에선 파일 위치 지시자의 위치를 사용자 마음대로 바꿀 수 있게 해주는 여러가지 함수들을 지원.\
그 중 대표적으로 가장 많이 사용하는 ```fseek``` 함수가 있다.
```
int fseek(FILE* stream, long int offset, int origin);
stream 에는 우리가 파일 위치 지시자를 옮기고 싶은 스트림의 포인터를, origin 에는 어디서 부터 옮길지, 그리고 offset에는 얼마만큼 옮기지에 대한 정보가 들어간다.
```
---
## 파일에 쓰기, 읽기 같이 하기 
fopen 에는 하나의 파일에 대해 읽기/쓰기를 모두 할 수 있는 방법을 지원.\
```
FILE *fp = fopen("some_data.txt", "r+");
```
```some_data.txt``` 를 __읽기 및 쓰기 형식으로 열겠다__ 라는 뜻.\
파일이 존재하지 않는다면 열지를 않겠다는 의미.\
만약 파일이 존재한다면 파일의 내용을 지우지 않는다.\

스트림 작업에서 읽기/쓰기 변환할 때 반드시 fflush 함수를 호출하거나 fseek 이나 rewind 와 같은 함수를 호출하여 파일 위치 지정자를 다시 설정해줘야 한다.\
 반드시 쓰기 작업 후 다시 읽기 작업을 할 때 fflush 나 fseek 함수를 호출.

 ## fopen 함수의 기타 인자 사용
```
/* fopen 의 'append' 기능 사용 */
```
