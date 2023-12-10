/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1Dpointer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:14:36 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 17:18:11 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// int main()
// {
// 	int arr[3] = {1, 2, 3};
// 	int *parr;

// 	parr = arr;
// 	/* parr = &arr[0]; 도 동일하다! */

// 	printf("arr[1] : %d \n", arr[1]);
// 	printf("parr[1] : %d \n", parr[1]);

// 	return (0);
// }

/* 포인터 이용하기 */
#include <stdio.h>
int main()
{
	int arr[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};

	int *parr = arr;
	int sum = 0;

	while (parr - arr <= 9)
	{
		/* code */
		sum += (*parr);
		parr++;
	}

	printf("내 시험 점수 평균 : %d \n", sum / 10);
	return (0);
}