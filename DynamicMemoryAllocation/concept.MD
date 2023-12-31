# 20 - 1 메모리 동적할당(Dynamic Memory Allocation)

이번 강좌

- malloc 함수의 이해
- 1차원 배열 동적 할당
- 2차원 배열 동적 할당

* 배열의 크기는 언제나 컴파일 시간에 확정.
  즉 컴파일러가 배열의 크기를 추측할 필요 없이 명확하게 나타나 있어야 된다.
  그러므로 배열의 크기를 명확하게 정활 수 없어 '충분히 크게' 잡게 되는데, 이렇게 된다면 메모리가 낭비되는 경우가 허다하게 발생한다.
  컴퓨터에서 낭비란 곧 비효율적인 프로그램을 의미.

동적 메모리 할당으로 해당 문제점 해결
할당되지 않는 메모리는 절대로 사용할 수 없다.

malloc - memory allocation 의 약자
#include <stdlib.h> 에 정의.
free 는 우리가 할당 받은 다 쓰고 난 후에 메모리 영역을 다시 컴퓨터에게 돌려주는 역할을 한다.
해제(free) 한다. free 를 제대로 하지 안헥 된다면 메모리 누수(memory leak) 발생.

## malloc 은 어디에 할당할까?

힙 영역.
메모리의 힙 부분은 사용자가 자유롭게 할당하거나 해제할 수 있다.
malloc 또한 힙 영역을 사용
힙은 할당과 해제가 자유로운 만큼 제대로 사용해야한다.
만일 힙에 할당은 헀는데, 해제를 하지 않는다면 공간 낭비.
다른 메모리 부분의 경우 컴퓨터가 알아서 처리하기 떄문에 문제 발생할 여지가 적지만, 힙은 인간이 다루는 만큼 철저해야함.

## 2차원 배열의 동적 할당

2 차원 배열을 동적으로 할당하는 방법으로 크게 두 가지 방법을 생각

- 포안터 배열을 사용해서 2 차원 배열 처럼 동작하는 배열을 만드는 방법
- 실제로 2 차원 배열 크기의 메모리를 할당한 뒤 2 차원 배열 포인터로 참조하는 방법

### 포인터 배열을 이용해서 2 차원 배열 할당하기

int \**arr 만일 int array[3] 이란 배열을 만들었다면 array -> int *형
arr 배열의 각 원소들은 int _형이므로 달느 int 배열을 가리키기를 갈망
arr 의 하나의 원소가 크기가 y인 배열을 가리키고 있는데 arr 의 원소가 x 개 이므로 전체적으로 봤을 때
총 x _ y 배열을 갖는 셈
이렇게 만들어진 배열은 정확히 말해 2차원 배열이라 말하기 힘들다.
배열은 메모리에 연속적으로 있어야 하기 때문이다.
2차원 배열 처럼 생긴 포인터 배열은 2 차원 배열과는 달리 함수의 인자로 손쉽게 넘길 수 있다.
--> 이게 가능한 이유는 우리가 만든 배열은 1 차원 배열들이지 2 차원 배열이 아니기 때문.
main 함수의 인자로 전달되는 argv 역시 이와 같은 성격이다.
그렇다고 2 차원 배열의 성질을 잃어버리는 것은 아님.
--> 그 이유는 2차원 배열처럼 접근하기 떄문이다.
2차원 배열처럼 행동함에도 불구하고 사실은 단순히 원소가 int \*형인 배열이기 때문에 기존 2차원 배열 처럼 열의 개수에 대한 정보가 없어도 된다.

### 진짜 2차언 배열 할당하기

메모리에 연속적으로 존재하는 진짜 2 차원 배열을 만들기 위해선 반드시 malloc 을 통해 해당 크기의 공간을 할당을 해야함.
int arr[height][width];
이 와 같이 생긴 배열을 할당하기 위해 필요한 메모리의 크기 == height _ width _ sizeof(int)
2 차원 배열 포인터의 경우 포인터 연산을 수행하기 위해선 반드시 포인터 타입 안에 행 길이가 들어가야 한다.
int (_arr)[width] = (int (_)[width])malloc(height _ width _ sizeof(int));
컴파일러 입장에서 행의 ㅡ기가 width 인 2차원 배열을 가리키는지 알 수 있다.
arr을 정의할 때 반드시 width 에 실제 배열의 넓이 값이 들어간 후에 정의.
arr 의 모든 데이터가 메모리에 연속적으로 있으므로 free 역시 arr에 대해 딱 한번만 수행하면 된다.

한 가지 주위할 점은 위 배열 포인터를 다른 함수에 인자로 전달하고 싶을 때.
void print_array(int (*arr)[width], int width, int height)
컴파일러가 배열의 정의인 int (*arr)[width] 을 보고 width 가 뭔지 알 수 없다는 것이다.
해결 책
arr 의 정의를 볼 때 width 의 정체를 알 수 있도록, width가 arr의 정의 앞으로 오도록 순서를 바꿔주면 된다.
void print_array(int width, int (\*arr)[width], int height)

---

## 그래서 어떠한 방식을 사용해야 하나?

### 되도록이면 연속된 공간에 2차우너 배열을 할당하는 후자의 방법을 취하는 것이 좋다.

- malloc 은 상당히 느린 함수 중 하나. 따라서 malloc의 호출 횟수를 최소한으로 하는 것이 좋다.
  따라서 배열의 높이 만큼 malloc 을 호출해야 하는 전자의 방법은 height 가 커질 수록 상당히 느려진다.
- 전자의 방법으로 메모리 원소에 접근하기 위해서는 두 단계의 메모리 접근이 필요.
  EX) arr[3][2] 의 경우 arr[3] 을 읽은 뒤, 해당 주소에 다시 [2] 연산을 해야한다.
  반면 후자의 경우 컴파일러가 다이렉트로 메모리 arr[3][2]에 접근할 수 있다.
- 메모리가 연속적으로 있을 경우 접근이 더 빠르다.

## 후자의 방식(진짜 2차원 배열 할당) 경우 배열 포인터를 사용하기 때문에 배열의 선언이 조금 길어지는 면이 있지만, 그 정도의 귀찮음은 감수할 만 하다.

# 20 - 2 메모리 동적 할당 + 메모리 갖고 놀기

## 이번 강좌

- 구조체의 동적 할당
- 노드의 이용
- 메모리 관리 함수 (memmove, memcpy, memcmp) 함수의 이용

## 구조체 동적 할당

구조체는 '사용자가 만든 하나의 데이터 타입' 이라 생각하라.
sizeof 대신에 구조체의 실제 크기를 게산해서 다하게 되면 오류를 발생시킬 수 있다.
구조체의 경우 1 개당 8 바이트를 차지한다고 볼 수 있는데 사실은 그렇지 않을 수 있다.

EX)
구조체의 크기가 10 바이트 일 경우, 컴퓨터가 더블워드 경계(double word boundary) 에 놓음으로 속도를 향상시키는 경우가 있는데, 이 경우 구조체의 크기는 12 바이트로 간주될 수 있다.
언제나 sizeof 를 사용해야 한다.

## 노드

1000 개의 데이터가 있는데 1 개의 추가적인 데이터를 위해 1001 개를 위한 공간을 새로 잡으면 너무 아깝다.
=> 이를 해결하는 것이 바로 '노드'
노드를 C 코드로 구현한다면
struct Node {
int data; /_ 데이터 _/
struct Node* nextNode; /* 다음 노드를 가리키는 부분 \*/
};
첫 번째 노드가 다음 노드를 가리키면 다음 노드는 그 다음다음 노드를 가리키는 식으로 쭉 이어지면서 마지막 노드 까지 이어진다.
이 때 마지막 노드는 아무것도 가리키지 않는다.
또한 각각의 노드는 데이터를 하나씩 갖고 있다.
나중에 데이터를 한 개 더 추가하려 하면 마지막 노드에 새 노드를 만들어서 이어주기만 하면 된다.

CreateNode 함수는 malloc 을 통해 노드를 메모리에 할당하고, 이 할당된 노드는 newNode 가 가리키게 된다.
이 함수는 노드를 생성하기만 할 뿐 노드를 어떻게 관계짓지는 못한다. 따라서 어떠한 노드 뒤에 새로운 노드를 생성하는 함수를 만들어야 한다.
이 함수는 InsertNode 함수라고 하자.
어떠한 노드 뒤에 올지 '앞에 있는 노드'에 관한 정보와 '새로운 노드를 위한 데이터' 기 필요하므로 struct Node \*current, int data 를 인자로 가져야 한다.

노드는 배열과는 달리 추가/삭제/삽입이 월등히 편리하다.
N 개의 노드가 있담녀 최악의 경우 N 번 동안 계속 찾아야 하지만 배열의 경우 특정한 상수 시간 내에 찾아갈 수 있기 때문에 이 부분은 배열이 월등히 좋다.
또한 노드의 경우 데이터를 위한 공간 말고도 다음 노드를 가리키기 위한 바이트가 더 필요하기 때문에 공간적으로도 약간 손해를 본다.

### 결론

추가/삭제/삽입 자주 일어나는 경우 노드를 사용
특정한 번째에 찾아 가야하는 일이 잦은 일은 배열을 사용하는 것이 이롭다.

## 메모리 관련 함수

C 표준 라이브러리에서 기본으로 지원되는 것들

1. memove
2. memcpy
3. memcmp
4. memset
   -> memset을 제외한 것을 학습할 예정 => string.h 에 정의되어 있다.

### memcpy

메모리의 특정한 부분으로 부터 얼마 까지의 부분을 다른 메모리 영역으로복사해주는 함수
strlen 의 경우 NULL 문자를 세지 않으므로 str2에 memcpy 로 복사할 땐 1을 더 한 만큼 더 복사해줘야한다.

### memmove

memmove 함수의 장점은 memcpy와 하는 일이 많이 비슷해보이지만 사실 memcpy 와는 달리 메모리 공간이 겹쳐도 된다.

### memcmp

memcmp 함수는 꽤 유용하게 사용될 수 있다.
이 함수는 메모리의 두 부분을 원하는 만큼 비교를 한다.
이 때 같다면 0, 다르다면 결과에 따라 0이 아닌 값을 리턴한다.
