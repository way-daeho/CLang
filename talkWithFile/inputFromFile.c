/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputFromFile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 03:02:08 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/05 03:03:52 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* fgets 로 a.txt 에서 내용을 입력 받는다. */
#include <stdio.h>
int main()
{
	FILE *fp = fopen("a.txt", "r");
	char buf[20]; // 내용을 입력 받을 곳.
	if (fp == NULL)
	{
		printf("READ ERROR !! \n");
		return 0;
	}
	fgets(buf, 20, fp);
	printf("입력 받는 내용 : %s \n", buf);
	fclose(fp);
	return 0;
}