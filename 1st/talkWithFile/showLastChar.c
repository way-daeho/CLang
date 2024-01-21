/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showLastChar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:41:07 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/06 02:42:39 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 파일의 마지막 문자를 보기 */
#include <stdio.h>

int main()
{
	FILE *fp = fopen("some_data.txt", "r");
	char data[10];
	char c;

	if (fp == NULL)
	{
		printf("file open error ! \n");
		return 0;
	}

	fseek(fp, -1, SEEK_END);
	c = fgetc(fp);
	printf("파일 마지막 문자 : %c \n", c);

	fclose(fp);
}