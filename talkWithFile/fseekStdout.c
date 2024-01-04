/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fseekStdout.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 03:18:33 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/05 03:20:52 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 출력 스트림도 마찬가지*/
#include <stdio.h>
int main()
{
	FILE *fp = fopen("daehlee.txt", "w");
	fputs("daehlee is become an excellent Programmer", fp);
	fseek(fp, 0, SEEK_END);
	fputs("is Psi", fp);
	fclose(fp);
	return 0;
}