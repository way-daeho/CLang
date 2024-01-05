/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fopenr+.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:44:36 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/06 02:46:03 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* fopen 의 "r+" 인자 이용해보기 */
#include <stdio.h>
int main()
{
	FILE *fp = fopen("some_data.txt", "r+");
	char data[100];

	fgets(data, 100, fp);
	printf("현재 파일에 있는 내용 : %s \n", data);

	fseek(fp, 5, SEEK_SET);

	fputs("is nothing on this file", fp);

	fclose(fp);
}