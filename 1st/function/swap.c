/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:08:31 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 19:13:09 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 두 변수의 값을 교환하는 함수 */
// #include <stdio.h>
// int swap(int a, int b)
// {
// 	int temp = a;

// 	a = b;
// 	b = temp;

// 	return 0;
// }

// int main()
// {
// 	int i, j;

// 	i = 3;
// 	j = 5;

// 	printf("SWAP 이전 : i : %d, j : %d \n", i, j);

// 	swap(i, j); // swap 함수 호출~~

// 	printf("SWAP 이후 : i : %d, j : %d \n", i, j);

// 	return (0);
// }

/* 올바른 swap 함수 */
#include <stdio.h>
int swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

	return 0;
}
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