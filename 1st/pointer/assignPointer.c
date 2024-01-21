/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assignPointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:59:40 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 14:00:51 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 포인터의 대입 */
#include <stdio.h>
int main()
{
	int a;
	int *pa = &a;
	int *pb;

	*pa = 3;
	pb = pa;

	printf("pa 가 가리키고 있는 것 : %d \n", *pa);
	printf("pb 가 가리키고 있는 것 : %d \n", *pb);

	return 0;
}