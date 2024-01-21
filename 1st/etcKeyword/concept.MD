# 22. C 언어의 잡다한 키워드들 (typedef, volatile, #pragma)

이번 강좌

- typedef 키워드에 대해 알아본다.
- volatile 키워드에 대해 알아본다.
- #pragma 에 대해 알고, 특히 #pragma pack 과 #pragma once 키워드에 대해 이해한다.

---

구조체를 사용할 때 마다 앞에 struct 키워드를 붙여야 한다는 점이 귀찮았다.
간혹 struct 키워드를 붙이지 않는다면 오류 테러를 맞보게 된다.

```
예
error C2146: 구문 오류 : ')'이(가) 'human' 식별자 앞에 없습니다.
error C2061: 구문 오류 : 식별자 'human'
error C2059: 구문 오류 : ';'
error C2059: 구문 오류 : ')'
error C2449: 파일 범위에 '{'가 있습니다. 함수 헤더가 없는 것 같습니다.
error C2059: 구문 오류 : '}'
. (위 오류는 int Print_Status(struct HUMAN human) 대신에 int Print_Status(HUMAN human) 이라 썼을 때 나타나는 오류들 입니다)
```

typedef struct HUMAN Human;

```
	typedef 라는 키워드를 사용했다.
	사용법
	typedef (이름을 새로 부여하고자 하는 타입) (새로 준 타입의 이름)

	strcut HUMAN 이라는 타입에 Human 이라는 다른 이름을 붙인 것이 된다.
	기존의 이름을 없애 버린 것이 아니기 때문에 typedef 를 사용한 이후에도 struct HUMAN 이라고 쓴 것은 유효.
```

typedef 를 이용하는 이유는 형을 간단하게 쓴다는 이유 때만은 아니다.\
계산기의 제한 사항이 있다면? EX 32비트 연산이 안되고 16비트 이하만 연산할 수 있을 경우 -> int 형을 사용하는 것은 불가능하고 short 나 char 형의 변수들만 선언해야한다.\
이를 위해 소스 코드 전체의 변수들을 char 나 short로 바꿔줘야 한다. 그런데 만일 동일한 프로그램인데 다른 기종의 계산기에선 int 형이 사용 가능할 경우. 또 코드를 바꿔줘야한다.\
해당 경우 CAL_TYPE 으로 typedef 를 통해 int 형과 같다고 정의, 만약 다른 변수형을 사용해야한다면 typdef 에서 CAL_TYPE 의 형을 short 나 char 로 간단히 바꿔버리면 된다.

## 여러가지 'typedef' 들

## 함수 포인터, 배열 선언 문장등을 하나의 이름으로 치환할 수 있다.

## volatile 키워드

volatile 은 아주 아주 특수한 상황이 아니고서는 사용하지 않는 키워드.\
volatile 키워드를 사용하는 경우 대부분 외부 하드웨어와 통신할 때 사용하게 된다.\

```
너무 길어서 예시를 그대로 복사 해왔다.
만일 여러분이 특정한 외부 센서와 소통하는 프로그램을 만든다고 합시다. 이 센서는 RAM 의 특정 영역을 이용하는데, 만일 센서에 값이 감지되지 않으면 그 곳의 값이 0 이 되어 무언가가 감지되면 그 부분의 값을 1 로 한다고 합시다. 그렇다면 여러분은 십중팔구 아래와 같은 코드를 작성할 것입니다.

#include <stdio.h>
typedef struct SENSOR {
  /* 감지 안되면 0, 감지되면 1 이다.*/
  int sensor_flag;
  int data;
} SENSOR;

int main() {
  SENSOR *sensor;
  /* 값이 감지되지 않는 동안 계속 무한 루프를 돈다*/
  while (!(sensor->sensor_flag)) {
  }
  printf("Data : %d \n", sensor->data);
}
참고로 typedef 를 위와 같이 써줌으로써 typedef struct SENSOR SENSOR 한 효과를 낼 수 있습니다.

위 코드는 가상의 코드 이므로 컴파일 해보지 않겠습니다만, 일단 여러분은 위 코드에서 별 이상을 느끼지는 못할 것입니다. 하지만 똑똑한 컴파일러는 '너무 과하게 똑똑해서' 우리가 사용한 while 문을 최적화 해버립니다. 보통의 상황에서 sensor->sensor_flag 의 값이 바뀌는 경우는 없기 때문에 굳이 while 문을 매번 돌릴 때 마다 값을 비교할 필요가 없게 되는 것이지요. 그냥 컴파일러는 값을 딱 한 번만 읽고 0 이 아니라면 그냥 가고, 0 이라면 while 문을 무한히 돌리는 것으로 생각해버립니다. 결과적으로 위 코드를 컴파일러는 다음과 같은 코드로 바꿔버립니다.

#include <stdio.h>
typedef struct SENSOR {
  /* 감지 안되면 0, 감지되면 1 이다.*/
  int sensor_flag;
  int data;
} SENSOR;
int main() {
  SENSOR *sensor;
  if (!(sensor->sensor_flag)) {
    while (1) {
    }
  }
  printf("Data : %d \n", sensor->data);
}
이는 우리가 결코 원하던 결과가 아닙니다. 만일 센서에 값이 감지되었다고 해도 while 문을 절대로 탈출할 수 없게 되어 무한 루프에 빠지게 되는 것이지요
```
### 컴파일러가 이런 최적화 작업을 수행하는 것을 원하지 않을 때, 컴파일러에게 알려주기 위한 두 가지 방법.

컴파일러의 최적화 옵션을 빼버리는 것.
gcc 에선 최적화 옵션 안주면 된다.\
visual studio 의 경우 살짝 복잡.\
1. 프로젝트 속성의 C/C++ -> 최적화 에서 사용 안함 선택\

하지만, 최적화를 하지 않기에는 너무나 손실이 크다.
이를 위해 volatile 키워드 생성.
```
#include <stdio.h>
typedef struct SENSOR {
  /* 감지 안되면 0, 감지되면 1 이다.*/
  int sensor_flag;
  int data;
} SENSOR;

int main() {
  volatile SENSOR *sensor;
  /* 값이 감지되지 않는 동안 계속 무한 루프를 돈다*/
  while (!(sensor->sensor_flag)) {
  }
  printf("Data : %d \n", sensor->data);
}
```
sensor 에 대해 최적화를 수행하지 않는다.\
volatiole 의 의미는 '변덕스러운'이란 의미를 갖고 있다.\
volatile 키워드를 붙여준 순간 최적화를 수행하지 말라는 의미.
---
## '#pragma 키워드'
'#pragma' 는 __컴파일러에게 말하는 전처리기 명령__\
즉, #include 나 #define 처럼 전처리기에 의해 컴파일 이전에 처리되지만, 그 명령은 컴파일러에게 전달되기 때문.\
pragma는 컴파일러에 종속적인 키워드. -> 사용하는 문법은 컴파일러 마다 다르고 딱히 통일 된 것이 없기 때문.\
__#pragma pack__\
```
#include <stdio.h>
struct Weird {
	char arr[2];
	int i;
};
int main() {
	struct Weird a;
	printf("size of a : %d \n", sizeof(a));
	return 0;
}
```
실제 메모리 상 위 구조체의 크기를 8 바이트로 컴파일러가 저장했기 때문에 8을 출력한다.\
데이터를 보관할 때에는 4의 배수로 데이터를 보관하는 것이 처리시 용이하다. 이렇게 데이터가 4의 배수 경계에 놓인 것을 ___더블 워드 경계___ 에 놓여 있다 라고 한다.\
그러기 때문에 Weird 구조체 역시 4의 배수를 맞추기 위해 크기를 8 바이트로 필요없는 2바이트를 추가하면서 맞춘 것.\
이 문제가 중요하게 여겨지는 부분은 역시 하드웨어 간의 통신 때문.\
예를 들어서 SCSI 인터페이스는 PC 에서 하드 디스크와 같은 주변 기기에 연결하기 위한 통신 방식으로 SCSI 장치들에게 읽기 명령을 내리기 위해서는 6 바이트의 명령어를 전송하면 됩니다. 이 6 바이트의 명령어의 구조는 꽤 복잡해서 흔히 구조체로 많이 이용하는데, 만일 위와 같이 그냥 사용했다가는 구조체의 크기가 8 바이트로 설정되어서 무슨 문제가 생길 지 알 수 없습니다.

이렇게 컴파일러로 하여금 구조체를 더블 워드 경계에 놓지 말라고 하고 싶을 때 pragma 키워드를 이용하면 됩니다.

```
#include <stdio.h>
/* 전처리기 명령에는 ; 를 붙이지 않는다! */
#pragma pack(1)
struct Weird {
  char arr[2];
  int i;
};
int main() {
  struct Weird a;
  printf("size of a : %d \n", sizeof(a));
  return 0;
}
결과 6
```
위 명령은 마이크로소프트 계열의 컴파일러들에만 유효한 문장, 구조체를 1 바이트 단위로 정렬하라는 뜻. 즉, 구조체의 크기가 1의 배수가 되게 하라는 것.\
1외에도 2, 4, 8, 16 등이 올 수 있다.\
즉, 더블 워드 경계로 정렬하기 위해선 #pragma pack(4) 로 하면 된다.

## '#pragma once'
헤더파일로 구조체를 빼 놓았을 때, 실수로 두번 .h 파일을 선언한다면 이중으로 선언되어 오류를 발생한다.\
C의 기본 전처리기 명령인 #ifndef로 해결할 수 있다.\
이렇게 하면 헤더파일의 내용이 중복으로 포함되는 것을 막을 수 있다. 하지만 #pragma 를 이용하면 훨씬 단순하게 할 수 있다.
'#pragma once' 명령어를 사용하면 컴파일러로 하여금 이 파일이 오직 딱 한번만 include 될 수 있다는 것을 말한다.\
#ifndef 를 이요하여 복잡하게 했던 작업들을 단순하게 한 문장으로 끝낼 수 있다.\
또한 #pragma once 의 장점으로 #ifndef 를 이용하는 것 보다 컴파일 시간을 절약할 수 있단 점. #ifndef 를 이용하게 되면 include 했을 때 전처리기가 직접 헤더파일을 열어 보아서 과연 .H가 정의되어 있는지 확인해 보아야 하는데, pragma once 를 이용하면 한 번 include 되었다면 헤더파일을 다시 열어보지 않기 때문에 컴파일 시간이 절약되는 효과.\
다만, 컴파일러에 따라 #pragma once 가 지원 되지 않을 수 도 있다.
