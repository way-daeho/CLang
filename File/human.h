/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   human.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:57:17 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 19:12:03 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enum
{
	MALE,
	FEMALE
};

struct Human
{
	char name[20];
	int age;
	int gender;
};

struct Human Create_Human(char *name, int age, int gender);
int Print_Human(struct Human *human);