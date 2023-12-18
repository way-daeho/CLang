/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:24:09 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/18 15:25:34 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int str_length(char *str);

int main()
{
	char str[] = {"What is your name?"};

	printf("이 문자열의 길이 : %d \n", str_length(str));

	return 0;
}

int str_length(char *str)
{
	int i = 0;
	while (str[i])
	{
		/* code */
		i++;
	}

	return i;
}