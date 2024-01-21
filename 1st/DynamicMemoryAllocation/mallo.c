/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:26:10 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 20:29:35 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 동적 할당의 활용 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int student; // 입력 받고자 하는 학생 수
	int i, input;
	int *score;	 // 학생 들의 수학점수 변수
	int sum = 0; // 총점

	printf("학생의 수는 ? : ");
	scanf("%d", &student);

	score = (int *)malloc(student * sizeof(int));

	for (i = 0; i < student; i++)
	{
		printf("학생 %d 의 점수 : ", i);
		scanf("%d", &input);

		score[i] = input;
	}

	for (i = 0; i < student; i++)
	{
		/* code */
		sum += score[i];
	}

	printf("전체 학생 평균 점수 : %d \n", sum / student);
	free(score);

	return 0;
}