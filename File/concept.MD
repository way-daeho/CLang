# 18 - 1. 파일 뽀개기 (헤더파일과 #include)

- 모듈화 프로그래밍 (파일 나누기)
- #include 전처리기에 대한 이해

## 파일 나누기

compare 함수는 상당히 다른 일을 하고 있기 떄문에 굳이 main 함수와 같은 파일에 둘 필요가 없다.
파일을 같은 디렉터리에 str.c라는 소스파일을 만든 후 실행을 해도 동일하게 실행되는 것을 알 수 있다.
C 코드를 컴퓨터가 이해할 수 있는 언어로 바꿔주는 (Compile) 이란 과정이 진행
이는 단일 소스 코드 전체를 어셈블리어 (기계어와 1 : 1 대응이 되어 있음) 로 변환해준다. (이 때, 목적콛라 불리는 확장자가 .o 인 파일이 생성)
이 과정이 끝나게 되면 링킹(linkiong) 이라는 과정이 진해으 말 그래도 각기 다른 파일에 위치한 소스 코드들을 한데 엮어서 하나의 실행 파일로 만들어지는 과정

링킹 과정에서 특정한 소스 파일에 있는 함수들이 어디어디에 있는지 찾는 과정을 거치게 되는데 예를 들어 test.c 의 경우 compare 함수가 어디있는지 찾게 된다.

compare 함수는 str.c 에 있기 때문에 링커(링킹을 해주는 프로그램)는 'test.c'에서 comopare 함수를 호출하는 경우 str.c 에서 찾아라 정도로 처리.
만일 test.c 에서 char compare(char *str1, char *str2); 부분을 지우게 되면,
main 함수에서 compare 함수를 호출 했는데, compare 함수의 생김새를 모르기 때문에 컴파일 시에 오류가 발생.
물론 링커의 경우도 compare 함수의 정확한 모양이 무엇인지 알 수 없으므로 오류가 발생.

따라서 언제나 함수의 선언을 명시해 주는 것이 매우 중요한 일

함수가 추가가 된다면, 해당 함수를 사용하는 프로그램에 추가된 함수의 원형도 적어줘야한다.
해당 문제를 해결하기 위해 C 에서 해결책 제시 -> 바로 헤더파일(header file)을 이용하는 것.

## 헤더 파일

#include 와 같으 명령들은 전처리기(Preprocessor) 명령이라 부른다.
이러한 명령들의 특징은 컴파일 이전에 실행된다.
이 명령은 우리가 지칭하는 파일의 내용을 정확히 100% 복사해서 붙여 넣는다는 점.
< > 로 감싸는 헤더파일은 컴파일러에서 기본으로 지원하는 헤더파일의 경우
" " 로 감싸는 헤더파일은 사용자가 직접 제작한 헤더파일의 경우.
보통 헤더파일을 만들 때 그 헤더파일에 있는 함수들이 정의되어 있는 소스 파일의 이름을 따서 짓는 것이 보통이다.
~.c 일 경우 ~.h

파일을 나눠서 처리하게 되면 상당히 체계적으로 프로그래밍 할 수 있다. -> 모듈화 프로그래밍 (modular programming)
즉 프로그램의 각 부분 부분 나눠 따로 처리한다는 의미

---

# 18 - 2

- #include, #define, #ifdef, #endif, #else 와 같은 전처리기 구문에 대한 이해
- 헤더파일에 대한 설명
- 라이브러리 (string.h) 사용하기

## 헤더 파일

헤더파일에는 함수의 원형 뿐만이 아니라 아래의 것들도 함께 주로 쓰는 경우가 대다수

- 전역 변수
- 구조체, 공용체, 열거형
- 함수의 원형
- 일부 특정한 함수 (인라인 함수..)
- 매크로

파일 분할하는 습관을 들여야함.
파일을 분할하게 되면 프로그래밍이 상당히 편해지는 것을 느낄 것이다.
각 소스파일에 정확히 무엇을 하는지 나타내주는 것이 중요.

## 다른 사라밍 만들어 놓은 것 쓰기

다른 사람들이 만들어 놓은 것을 가리켜서 라이브러리 라고 한다.

## # 친구들

#이 들어간 명령어들은 '전처리기 명령'
전처리기의 의미는 컴파일 이전에 처리된다는 뜻
즉, 컴파일러 되기 이전에 #include 라는 부분은 #include 에 해당하는 파일의 소스 코드로 정확히 바뀐다.

### #define

#define 명령은 다음과 같이 사용
#define 매크로이름 값
// 전처리기 문들은 끝에 ; 를 붙이지 않는다.
'매크로 이름' 에 해당하는 부분을 '값' 으로 대체 물론, 전처리기 명령이기 때문에 컴파일 이전에 정확하게 대체

### #ifdef, endif

#ifdef /* 매크로 이름 */
(매크로 이름)이 정의됐다면 이 부분이 코드에 포함되고 그렇지 않다면 코드에 포함되지 않는다.
#endif

언제나 ifdef는 endif 와 짝을 지어서 사용, ifdef 에서 지정한 매크로가 정의되어 있다면 ifdef 와 endif 속에 코드가 포함되고 그렇지 않다면 코드에 포함되지 않는 것으로 간주.
코드에 포함되지 않는 것으로 간주한다면 컴파일러 입장에서는 마치 주석처럼 무시된다.
조건부 컴파일은 상당히 유용하게 쓰일 수 있다.

define 되는 것이 무엇이냐에 따라 간단히 무엇을 컴파일 할 것인지를 나타낼 수 있다.
조건부 컴파일에서 #else 라는 것도 사용할 수 있는데, 이는 #ifdef의 경우 이외의 나머지 것들을 처리하는 것.
이 역시 #endif로 항상 끝을 맺어줘야함.

또한 #ifdef 친구로 #ifndef도 있는데, 이는 '매크로가 정의되어 있지 않다면' 참이 된다.
#ifdef의 정 반대