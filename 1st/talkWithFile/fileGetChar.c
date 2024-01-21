/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileGetChar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:31:50 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/06 02:32:58 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 파일에서 문자를 하나씩 입력 받는다 */
#include <stdio.h>

int main()
{
	FILE *fp = fopen("some_data.txt", "r");
	char c;

	if (fp == NULL)
	{
		printf("file open error ! \n");
		return 0;
	}

	while ((c = fgetc(fp)) != EOF)
	{
		printf("%c", c);
	}
	{
		/* code */
	}
}