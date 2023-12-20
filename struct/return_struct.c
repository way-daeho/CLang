/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:21:37 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/20 18:22:49 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 구조체를 리턴하는 함수 */
#include <stdio.h>
struct AA function(int j);
struct AA
{
	int i;
};

int main()
{
	struct AA a;

	a = function(10);
	printf("a.i : %d \n", a.i);

	return 0;
}

struct AA function(int j)
{
	struct AA A;
	A.i = j;

	return A;
}