/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:16:44 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 19:16:53 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 함수의 원형 */
#include <stdio.h>
int swap(int *a, int *b); // 이 것이 바로 함수의 원형
int main()
{
	int i, j;
	i = 3;
	j = 5;
	printf("SWAP 이전 : i : %d, j : %d \n", i, j);
	swap(&i, &j);
	printf("SWAP 이후 : i : %d, j : %d \n", i, j);

	return 0;
}
int swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

	return 0;
}