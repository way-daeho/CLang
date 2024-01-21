/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exampleOffseek.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:38:03 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/06 02:40:22 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* fseek 함수 예제 */
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

	fgets(data, 5, fp);
	printf("입력 받은 데이터 : %s \n", data);

	c = fgetc(fp);
	printf("그 다음에 입력 받은 문자 : %c \n", c);

	fseek(fp, -1, SEEK_CUR);

	c = fgetc(fp);
	printf("그렇다면 무슨 문자가? : %c \n", c);

	fclose(fp);
}