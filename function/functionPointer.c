/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functionPointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 21:02:21 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/12 21:12:05 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 함수 포인터 */
// #include <stdio.h>
//
// int max(int a, int b);
// int main()
// {
// 	int a, b;
// 	int (*pmax)(int, int);
// 	pmax = max;
//
// 	scanf("%d %d", &a, &b);
// 	printf("max(a, b) : %d \n", max(a, b));
// 	printf("pmax(a, b) : %d \n", pmax(a, b));
//
// 	return 0;
// }
//
// int max(int a, int b)
// {
// 	if (a > b)
// 		return a;
// 	else
// 		return b;
//
// 	return 0;
// }

/* 함수 포인터 2 */
#include <stdio.h>

int max(int a, int b);
int donothing(int c, int k);
int main()
{
	int a, b;
	int (*pfunc)(int, int);
	pfunc = max;

	scanf("%d %d", &a, &b);
	printf("max(a,b) : %d \n", max(a, b));
	printf("pfunc(a,b) : %d \n", pfunc(a, b));

	pfunc = donothing;

	printf("donothing(1,1) : %d \n", donothing(1, 1));
	printf("pfunc(1,1) : %d \n", pfunc(1, 1));
	return 0;
}

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;

	return 0;
}
int donothing(int c, int k) { return 1; }