/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:15:59 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 16:27:13 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 정적 변수의 활용 */
// #include <stdio.h>

// int function()
// {
// 	static int how_many_called = 0;

// 	how_many_called++;
// 	printf("function called : %d \n", how_many_called);

// 	return 0;
// }
// int function2()
// {
// 	static int how_many_called = 0;

// 	how_many_called++;
// 	printf("function 2 called : %d \n", how_many_called);

// 	return 0;
// }
// int main()
// {
// 	function();
// 	function2();
// 	function();
// 	function2();
// 	function2();
// 	function2();
// 	function();
// 	function();
// 	function2();

// 	return 0;
// }

/* 메모리 배치 모습 */
#include <stdio.h>
int global = 3;
int main()
{
	int i;
	char *str = "Hello, Baby";
	char arr[20] = "WHATTHEHECK";

	printf("global  %p \n", &global);
	printf("i : %p \n", &i);
	printf("str : %p \n", str);
	printf("arr : %p \n", arr);
}