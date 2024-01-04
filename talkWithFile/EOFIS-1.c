/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EOFIS-1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 03:09:33 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/05 03:10:36 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	FILE *fp = fopen("a.txt", "r");
	int size = 0;

	while (fgetc(fp) != EOF)
	{
		/* code */
		size++;
	}

	printf("이 파일의 크기는 : %d bytes \n", size);
	fclose(fp);
	return 0;
}