/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loserOrWinner.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:04:42 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/02 01:13:11 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	루저 위너 판별기
	오류 투성이 ;;
 */
// #include <stdio.h>
// int Print_Status(struct HUMAN human);
// struct HUMAN
// {
// 	int age;
// 	int height;
// 	int weight;
// 	int gender;
// };

// int main()
// {
// 	struct HUMAN Adam = {31, 182, 75, 0};
// 	struct HUMAN Eve = {27, 166, 48, 1};

// 	Print_Status(Adam);
// 	Print_Status(Eve);
// }

// int Print_Status(struct HUMAN human)
// {
// 	if (human.gender == 0)
// 	{
// 		printf("MALE \n");
// 	}
// 	else
// 	{
// 		printf("FEMALE \n");
// 	}

// 	printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height,
// 		   human.weight);

// 	if (human.gender == 0 && human.height >= 180)
// 	{
// 		printf("HE IS A WINNER!! \n");
// 	}
// 	else if (human.gender == 0 && human.height < 180)
// 	{
// 		printf("HE IS A LOSER!! \n");
// 	}

// 	printf("------------------------------------------- \n");

// 	return 0;
// }

/* typedef 의 이용 */
#include <stdio.h>
struct HUMAN
{
	int age;
	int height;
	int weight;
	int gender;
};

typedef struct HUMAN Human;
int Print_Status(Human human);
int main()
{
	Human Adam = {31, 182, 75, 0};
	Human Eve = {27, 166, 48, 1};

	Print_Status(Adam);
	Print_Status(Eve);
}

int Print_Status(Human human)
{
	if (human.gender == 0)
	{
		printf("MALE \n");
	}
	else
	{
		printf("FEMALE \n");
	}

	printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height,
		   human.weight);

	if (human.gender == 0 && human.height >= 180)
	{
		printf("HE IS A WINNER!! \n");
	}
	else if (human.gender == 0 && human.height < 180)
	{
		printf("HE IS A LOSER!! \n");
	}

	printf("------------------------------------------- \n");

	return 0;
}