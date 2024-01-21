/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enum.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:48:55 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/20 18:52:48 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 열거형의 도입 */
// #include <stdio.h>
// enum
// {
// 	RED,
// 	BLUE,
// 	WHITE,
// 	BLACK
// };
// int main()
// {
// 	int palette = RED;
// 	switch (palette)
// 	{
// 	case RED:
// 		printf("palette : RED \n");
// 		break;
// 	case BLUE:
// 		printf("palette : BLUE \n");
// 		break;
// 	case WHITE:
// 		printf("palette : WHITE \n");
// 		break;
// 	case BLACK:
// 		printf("palette : BLACK \n");
// 		break;
// 	}
// }

/* 열거형 팁 */
#include <stdio.h>
enum
{
	RED = 3,
	BLUE,
	WHITE,
	BLACK
};
int main()
{
	int palette = BLACK;
	printf("%d \n", palette);
}