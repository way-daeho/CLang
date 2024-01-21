/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real2DArray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:09:29 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/28 16:35:38 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	int width, height;
// 	printf("배열 행 크기 : ");
// 	scanf("%d", &width);
// 	printf("배열 열 크기 : ");
// 	scanf("%d", &height);

// 	int(*arr)[width] = (int(*)[width])malloc(height * width * sizeof(int));
// 	for (int i = 0; i < height; i++)
// 	{
// 		for (int j = 0; j < width; j++)
// 		{
// 			/* code */
// 			int data;
// 			scanf("%d", &data);
// 			arr[i][j] = data;
// 		}
// 	}
// 	for (int i = 0; i < height; i++)
// 	{
// 		for (int j = 0; j < width; j++)
// 		{
// 			printf("%d ", arr[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	free(arr);
// }

/*
	2차원 배열 함수 인자로 사용하는 방법.
*/
// #include <stdio.h>
// #include <stdlib.h>

// void add_one(int width, int (*arr)[width], int height)
// {
// 	for (int i = 0; i < width; i++)
// 	{
// 		for (int j = 0; j < width; j++)
// 		{
// 			arr[i][j]++;
// 		}
// 	}
// }

// void print_array(int width, int (*arr)[width], int height)
// {
// 	for (int i = 0; i < height; i++)
// 	{
// 		for (int j = 0; j < width; j++)
// 		{
// 			printf("%d ", arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

// int main()
// {
// 	int width, height;
// 	printf("배열 행 크기 : ");
// 	scanf("%d", &width);
// 	printf("배열 열 크기 : ");
// 	scanf("%d", &height);

// 	int(*arr)[width] = (int(*)[width])malloc(height * width * sizeof(int));
// 	for (int i = 0; i < height; i++)
// 	{
// 		for (int j = 0; j < width; j++)
// 		{
// 			int data;
// 			scanf("%d", &data);
// 			arr[i][j] = data;
// 		}
// 	}

// 	printf("----- Array ----- \n");
// 	print_array(width, arr, height);
// 	printf("----- Add one ----- \n");
// 	add_one(width, arr, height);
// 	print_array(width, arr, height);

// 	free(arr);
// }

/*
	해당 솔루션을 적용한 이전의 점수 계산 코드 수정
*/
#include <stdio.h>
#include <stdlib.h>

void get_average(int num_student, int num_subject, int (*scores)[num_student]);

int main(int argc, char **argv)
{
	int subject, students;

	printf("과목 수 : ");
	scanf("%d", &subject);

	printf("학생의 수 : ");
	scanf("%d", &students);

	// studentes 의 값이 정해진 후에 scores 을 정의해야 한다.
	int(*scores)[students];
	scores = (int(*)[students])malloc(sizeof(int) * subject * students);

	for (int i = 0; i < subject; i++)
	{
		printf("과목 %d 점수 ---------- \n", i);

		for (int j = 0; j < students; j++)
		{
			printf("학생 %d 점수 입력 : ", j);
			scanf("%d", &scores[i][j]);
		}
	}

	get_average(students, subject, scores);
	free(scores);

	return 0;
}

void get_average(int num_student, int num_subject, int (*scores)[num_student])
{
	int i, j, sum;

	for (int i = 0; i < num_subject; i++)
	{
		sum = 0;
		for (j = 0; j < num_student; j++)
		{
			sum += scores[i][j];
		}
		printf("과목 %d 평균 점수 : %d \n", i, sum / num_student);
	}
}