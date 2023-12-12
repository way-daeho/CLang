/* 눈 돌아가는 예제. 포인터가 가리키는 변수를 서로 바꾼다. */
#include <stdio.h>

int pswap(int **pa, int **pb);
int main()
{
	int a, b;
	int *pa, *pb;

	pa = &a;
	pb = &b;

	printf("pa 가 가리키는 변수의 주소값 : %p \n", pa);
	printf("pa 의 주소값 : %p \n \n", &pa);
	printf("pb 가 가리키는 변수의 주소값 : %p \n", pb);
	printf("pb 의 주소값 : %p \n \n", &pb);

	printf(" ---------- 호출 ---------- \n");
	pswap(&pa, &pb);
	printf(" ---------- 호출끝 ---------- \n");

	printf("pa 가 가리키는 변수의 주소값 : %p \n", pa);
	printf("pa 의 주소값 : %p \n \n", &pa);
	printf("pb 가 가리키는 변수의 주소값 : %p \n", pb);
	printf("pb 의 주소값 : %p \n \n", &pb);

	return 0;
}

int pswap(int **ppa, int **ppb)
{
	int *temp = *ppa;

	printf("ppa 가 가리키는 변수의 주소값 : %p \n", ppa);
	printf("ppb 가 가리키는 변수의 주소값 : %p \n", ppb);

	*ppa = *ppb;
	*ppb = temp;

	return 0;
}
