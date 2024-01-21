/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_paramete_struct.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:26:33 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/20 18:37:04 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	구조체 변수를 정의하는 색다른 방법.
*/
// #include <stdio.h>
// char copy_str(char *dest, char *src);
// int Print_Obj_Status(struct obj OBJ);
// struct obj
// {
// 	char name[20];
// 	int x, y;
// } Ball;

// int main()
// {
// 	Ball.x = 3;
// 	Ball.y = 4;
// 	copy_str(Ball.name, "RED BALL");

// 	Print_Obj_Status(Ball);

// 	return 0;
// }
// int Print_Obj_Status(struct obj OBJ)
// {
// 	printf("Location of %s \n", OBJ.name);
// 	printf("( %d , %d ) \n", OBJ.x, OBJ.y);

// 	return 0;
// }
// char copy_str(char *dest, char *src)
// {
// 	while (*src)
// 	{
// 		*dest = *src;
// 		src++;
// 		dest++;
// 	}

// 	*dest = '\0';

// 	return 1;
// }

/* 멤버를 쉽게 초기화 하기*/
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