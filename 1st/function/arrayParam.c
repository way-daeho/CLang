/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrayParam.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:20:49 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 19:24:54 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int add_number(int *parr);
// int main()
// {
// 	int arr[3];
// 	int i;

// 	/* 사용자로 부터 3 개의 원소를 입력 받는다. */
// 	for (i = 0; i < 3; i++)
// 	{
// 		scanf("%d", &arr[i]);
// 	}

// 	add_number(arr);

// 	printf("배열의 각 원소 : %d, %d, %d", arr[0], arr[1], arr[2]);

// 	return 0;
// }
// int add_number(int *parr)
// {
// 	int i;
// 	for (i = 0; i < 3; i++)
// 	{
// 		parr[i]++;
// 	}
// 	return 0;
// }

/* 입력 받은 배열의 10 개의 원소들 중 최대값을 출력 */
// #include <stdio.h>
// /* max_number : 인자로 전달받은 크기 10 인 배열로 부터 최대값을 구하는 함수 */
// int max_number(int *parr);
// int main()
// {
// 	int arr[10];
// 	int i;

// 	/* 사용자로 부터 원소를 입력 받는다. */
// 	for (i = 0; i < 10; i++)
// 	{
// 		scanf("%d", &arr[i]);
// 	}

// 	printf("입력한 배열 중 가장 큰 수 : %d \n", max_number(arr));
// 	return 0;
// }
// int max_number(int *parr)
// {
// 	int i;
// 	int max = parr[0];

// 	for (i = 1; i < 10; i++)
// 	{
// 		if (parr[i] > max)
// 		{
// 			max = parr[i];
// 		}
// 	}

// 	return max;
// }