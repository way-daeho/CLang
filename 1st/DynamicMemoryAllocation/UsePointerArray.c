/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UsePointerArray.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:51:11 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 20:54:35 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 2 차원 배열의 동적 할당 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	int x, y;
	int **arr; // arr[x][y]

	printf("arr[x][y]를 만들 것이다.\n");
	scanf("%d %d", &x, &y);

	arr = (int **)malloc(sizeof(int *) * x);
	// int * 형의 원소를 x 개 갖는 1 차원 배열 생성

	for (i = 0; i < x; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * y);
	}

	printf("생성 완료! \n");

	for (i = 0; i < x; i++)
		free(arr[i]);

	return 0;
}