/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nullTerminater.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:52:22 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/18 14:55:16 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 널 뽀개기 */
#include <stdio.h>

int main()
{
	char null_1 = '\0';
	char null_2 = 0;
	char null_3 = (char)NULL; //  모두 대문자로 써야한다.

	char not_null = '0';

	printf("NULL 의 정수(아스키)값 : %d, %d, %d \n", null_1, null_2, null_3);
	printf("'0' 의 정수(아스키)값 : %d \n", not_null);

	return 0;
}