/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printToFile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 02:47:50 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/05 02:49:33 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* a.txt 에 내용을 기록한다. */
#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("a.txt", "w");

	if (fp == NULL)
	{
		printf("Write Error!! \n");
		return 0;
	}

	fputs("Hello World!! \n", fp);

	fclose(fp);
	return 0;
}