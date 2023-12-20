/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:48:02 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/20 15:52:28 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 구조체의 도입 */
#include <stdio.h>
struct Human
{
	/* data */
	int age;
	int height;
	int weight;
};
int main()
{
	struct Human Psi;

	Psi.age = 99;
	Psi.height = 185;
	Psi.weight = 80;

	printf("Psi 에 대한 정보 \n");
	printf("나이	: %d \n", Psi.age);
	printf("키	: %d \n", Psi.height);
	printf("몸무게	: %d \n", Psi.weight);

	return 0;
}