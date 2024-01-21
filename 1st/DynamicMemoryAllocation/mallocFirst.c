/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocFirst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:20:29 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 20:21:53 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int SizeOfArray;
	int *arr;

	printf("만들고 싶은 배열의 원소의 수 : ");
	scanf("%d", &SizeOfArray);

	arr = (int *)malloc(sizeof(int) * SizeOfArray);

	free(arr);

	return 0;
}