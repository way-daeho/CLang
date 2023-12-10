/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublePointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:22:37 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 17:24:27 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 포인터의 포인터 */
#include <stdio.h>
int main()
{
	int a;
	int *pa;
	int **ppa;

	pa = &a;
	ppa = &pa;

	a = 3;

	printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
	printf("&a : %d // pa : %d // *ppa : %d \n", &a, pa, *ppa);
	printf("&pa : %d // ppa : %d \n", &pa, ppa);
}