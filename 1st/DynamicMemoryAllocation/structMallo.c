/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structMallo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:46:31 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/28 16:51:06 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
struct Something
{
	/* data */
	int a, b;
};
int main()
{
	struct Something *arr;
	int size, i;

	printf("원하시는 구조체 배열의 크기 : ");
	scanf("%d", &size);

	arr = (struct Something *)malloc(sizeof(struct Something) * size);

	for (i = 0; i < size; i++)
	{
		printf("arr[%d].a : ", i);
		scanf("%d", &arr[i].a);
		printf("arr[%d].b : ", i);
		scanf("%d", &arr[i].b);
	}

	for (i = 0; i < size; i++)
	{
		printf("arr[%d].a : %d , arr[%d].b : %d \n", i, arr[i].a, i, arr[i].b);
	}

	free(arr);

	return 0;
}
