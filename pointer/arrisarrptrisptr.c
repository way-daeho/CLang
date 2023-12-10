/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrisarrptrisptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:54:40 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 17:08:44 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int main()
// {
// 	int arr[6] = {1, 2, 3, 4, 5, 6};
// 	int *parr = arr;

// 	printf("Sizeof(arr) : %d \n", sizeof(arr));
// 	printf("Sizeof(parr) : %d \n", sizeof(parr));
// }

/* 신기한 [] 사용 */
#include <stdio.h>
int main()
{
	int arr[5] = {1, 2, 3, 4, 5};

	printf("3[arr] : %d \n", 3 [arr]);
	printf("*(3+a) : %d \n", *(arr + 3));

	return (0);
}