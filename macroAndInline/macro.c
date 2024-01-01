/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 00:14:56 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/02 00:27:48 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 매크로 함수 */
// #include <stdio.h>
// #define square(x) x *x

// int main(int argc, char **argv)
// {
// 	printf("square(3) : %d \n", square(3));

// 	return 0;
// }

/* 라디안에서 도로 바꾸기 */
// #include <stdio.h>
// #define RADTODEF(x) (x) * 57.295

// int main(int argc, char **argv)
// {
// 	printf("5 rad 는 : %f 도", RADTODEF(5));

// 	return 0;
// }

/* 변수의 이름 출력하기 */
// #include <stdio.h>
// #define PrintVariableName(var) printf(#var "\n");

// int main(int argc, char **argv)
// {
// 	int a;

// 	PrintVariableName(a);

// 	return 0;
// }

/* ## 의 사용 */
#include <stdio.h>
#define AddName(x, y) x##y

int main(int argc, char **argv)
{
	int AddName(a, b);

	ab = 3;

	printf("%d \n", ab);

	return 0;
}