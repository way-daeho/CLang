/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pragmapack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:45:34 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/02 01:48:31 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// struct Weird
// {
// 	char arr[2];
// 	int i;
// };
// int main()
// {
// 	struct Weird a;
// 	printf("size of a : %d \n", sizeof(a));
// 	return 0;
// }

#include <stdio.h>
/* 전처리기 명령에는 ; 를 붙이지 않는다! */
#pragma pack(1)
struct Weird
{
	char arr[2];
	int i;
};
int main()
{
	struct Weird a;
	printf("size of a : %d \n", sizeof(a));
	return 0;
}