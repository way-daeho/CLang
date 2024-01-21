/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrNameIsAddr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:28:34 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 17:33:07 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int main()
// {
// 	int arr[3] = {1, 2, 3};
// 	int(*parr)[3] = &arr;

// 	printf("arr[1] : %d\n", arr[1]);
// 	printf("parr[1] : %d\n", (*parr)[1]);
// }

#include <stdio.h>

int main()
{
	int arr[3] = {1, 2, 3};
	int(*parr)[3] = &arr;

	printf("arr : %p \n", arr);
	printf("parr : %p \n", parr);
}