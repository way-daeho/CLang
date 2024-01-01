/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:18:33 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/02 01:28:57 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 간단한 계산기 프로그램 */
// #include <stdio.h>
// int main()
// {
// 	int input;
// 	int a, b;

// 	while (1)
// 	{
// 		printf("--- 계산기 --- \n");
// 		printf("1. 덧셈 \n");
// 		printf("2. 뺄셈 \n");
// 		printf("3. 종료 \n");

// 		scanf("%d", &input);

// 		if (input == 1)
// 		{
// 			printf("두 수 : ");
// 			scanf("%d%d", &a, &b);
// 			printf("%d 와 %d 의 합 : %d \n", a, b, a + b);
// 		}
// 		else if (input == 2)
// 		{
// 			printf("두 수 : ");
// 			scanf("%d%d", &a, &b);
// 			printf("%d 와 %d 의 차 : %d \n", a, b, a - b);
// 		}
// 		else
// 			break;
// 	}

// 	return 0;
// }

/* 향상된 소스 코드 */
#include <stdio.h>
typedef int CAL_TYPE;
int main()
{
	CAL_TYPE input;
	CAL_TYPE a, b;

	while (1)
	{
		printf("--- 계산기 --- \n");
		printf("1. 덧셈 \n");
		printf("2. 뺄셈 \n");
		printf("3. 종료 \n");

		scanf("%d", &input);

		if (input == 1)
		{
			printf("두 수 : ");
			scanf("%d%d", &a, &b);
			printf("%d 와 %d 의 합 : %d \n", a, b, a + b);
		}
		else if (input == 2)
		{
			printf("두 수 : ");
			scanf("%d%d", &a, &b);
			printf("%d 와 %d 의 차 : %d \n", a, b, a - b);
		}
		else
			break;
	}

	return 0;
}