/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subtractionPointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:54:06 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 13:54:09 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 포인터 뺄셈 */
#include <stdio.h>
int main()
{
	int a;
	int *pa = &a;

	printf("pa 의 값 : %p \n", pa);
	printf("(pa - 1) 의 값 : %p \n", pa - 1);

	return 0;
}