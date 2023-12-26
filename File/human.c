/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   human.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:57:23 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 19:03:12 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "human.h"
#include "str.h"

struct Human Create_Human(char *name, int age, int gender)
{
	struct Human human;

	human.age = age;
	human.gender = gender;
	copy_str(human.name, name);

	return human;
}

int Print_Human(struct Human *human)
{
	printf("Name : %s \n", human->name);
	printf("Age : %d \n", human->age);
	if (human->gender == MALE)
	{
		printf("Gender : Male \n");
	}
	else if (human->gender == FEMALE)
	{
		printf("Gender : Female \n");
	}

	return 0;
}