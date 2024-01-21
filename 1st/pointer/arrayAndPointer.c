/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrayAndPointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:02:35 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 16:52:34 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 배열의 존재 상태? */
// #include <stdio.h>
// int main()
// {
// 	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int i;

// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("arr[%d] 의 주소값 : %p \n", i, &arr[i]);
// 	}

// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int *parr;
// 	int i;
// 	parr = &arr[0];

// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("arr[%d] 의 주소값 : %p ", i, &arr[i]);
// 		printf("(parr + %d) 의 값 : %p ", i, (parr + i));

// 		if (&arr[i] == (parr + i))
// 		{
// 			/* 만일 (parr + i) 가 성공적으로 arr[i] 를 가리킨다면 */
// 			printf(" --> 일치 \n");
// 		}
// 		else
// 		{
// 			printf("--> 불일치\n");
// 		}
// 	}
// 	return 0;
// }

/* 우왕 */
// #include <stdio.h>
// int main()
// {
// 	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int *parr;

// 	parr = &arr[0];

// 	printf("arr[3] = %d , *(parr + 3) = %d \n", arr[3], *(parr + 3));
// 	return 0;
// }

#include <stdio.h>
int main()
{
	int arr[3] = {1, 2, 3};

	printf("arr 의 정체 : %p \n", arr);
	printf("arr[0] 의 주소값 : %p \n", &arr[0]);

	return 0;
}