/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:59:49 by daehlee           #+#    #+#             */
/*   Updated: 2024/12/03 22:10:46 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 문자를 저장하는 변수 */
// #include <stdio.h>
// int main(void)
// {
// 	char a;
// 	a = 'a';

// 	printf("a 의 값과 들어 있는 문자는? 값 : %d, 문자 : %c \n", a, a);
// 	return (0);
// }

/* 섭씨 온도를 화씨로 바꾸기 */
// #include <stdio.h>
// int main(void)
// {
// 	double celsius; // 섭씨 온도

// 	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
// 	printf("섭씨 온도를 입력해주세요 : ");
// 	scanf("%lf", &celsius); // 섭시 온도를 입력받는다.

// 	printf("섭씨 %f 도는 화씨로 %f 도 입니다.\n", celsius, 9 * celsius / 5 + 32);

// 	return (0);
// }

/* scanf 총 정리 */
#include <stdio.h>
int main(void)
{
	char ch; // 문자

	short sh; // 정수
	int i;
	long lo;

	float fl; // 실수
	double du;

	printf("char 형 변수 입력 : ");
	scanf("%c", &ch);

	printf("short 형 변수 입력 : ");
	scanf("%hd", &sh);
	printf("int 형 변수 입력 : ");
	scanf("%d", &i);
	printf("long 형 변수 입력 : ");
	scanf("%ld", &lo);

	printf("float 형 변수 입력 : ");
	scanf("%f", &fl);
	printf("double 형 변수 입력 : ");
	scanf("%lf", &du);

	printf("char : %c , short : %d , int : %d ", ch, sh, i);
	printf("long : %ld , float : %f, double : %f \n", lo, fl, du);
	return (0);
}