/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameter_type_struct.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:02:56 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/20 18:14:18 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 구조체를 인자로 전달하기 */
// #include <stdio.h>
// struct TEST
// {
// 	int age;
// 	int gender;
// };

// int set_human(struct TEST a, int age, int gender);
// int main()
// {
// 	struct TEST human;
// 	set_human(human, 10, 1);
// 	printf("AGE : %d // Gender : %d", human.age, human.gender);
// 	return 0;
// }
// int set_human(struct TEST a, int age, int gender)
// {
// 	a.age = age;
// 	a.gender = gender;
// 	return 0;
// }

/* 인자로 제대로 전달하기 */
// #include <stdio.h>
// struct TEST
// {
// 	int age;
// 	int gender;
// };
// int set_human(struct TEST *a, int age, int gender);
// int main()
// {
// 	struct TEST human;

// 	set_human(&human, 10, 1);

// 	printf("AGE : %d // Gender : %d", human.age, human.gender);
// 	return 0;
// }
// int set_human(struct TEST *a, int age, int gender)
// {
// 	a->age = age;
// 	a->gender = gender;

// 	return 0;
// }

/* 살짝 업그레이드 */
#include <stdio.h>
struct TEST
{
	int age;
	int gender;
	char name[20];
};
int set_human(struct TEST *a, int age, int gender, const char *name);
char copy_str(char *dest, const char *src);

int main()
{
	struct TEST human;

	set_human(&human, 10, 1, "Lee");

	printf("AGE : %d // Gender : %d // Name : %s \n", human.age, human.gender, human.name);
	return 0;
}
int set_human(struct TEST *a, int age, int gender, const char *name)
{
	a->age = age;
	a->gender = gender;
	copy_str(a->name, name);

	return 0;
}
char copy_str(char *dest, const char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return 1;
}