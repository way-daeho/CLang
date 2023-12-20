/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_in_struct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:16:52 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/20 18:19:02 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 구조체 안의 구조체 */
#include <stdio.h>
struct employee
{
	int age;
	int salary;
};
struct company
{
	struct employee data;
	char name[10];
};

int main()
{
	struct company Kim;

	Kim.data.age = 31;
	Kim.data.salary = 3000000;

	printf("Kim's age : %d \n", Kim.data.age);
	printf("Kim's salary : %d$/year \n", Kim.data.salary);

	return 0;
}