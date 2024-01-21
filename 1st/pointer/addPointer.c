/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addPointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:51:11 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 13:53:13 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 포인터의 덧셈 */
// #include <stdio.h>
// int main() {
// 	int a;
// 	int* pa;
// 	pa = &a;

// 	printf("pa 의 값 : %p \n", pa);
// 	printf("(pa + 1) 의 값 : %p \n", pa + 1);

// 	return 0;
// }

#include <stdio.h>
int main()
{
	int a;
	char b;
	double c;
	int *pa = &a;
	char *pb = &b;
	double *pc = &c;

	printf("pa 의 값 : %p \n", pa);
	printf("(pa + 1) 의 값 : %p \n", pa + 1);
	printf("pb 의 값 : %p \n", pb);
	printf("(pb + 1) 의 값 : %p \n", pb + 1);
	printf("pc 의 값 : %p \n", pc);
	printf("(pc + 1) 의 값 : %p \n", pc + 1);

	return 0;
}