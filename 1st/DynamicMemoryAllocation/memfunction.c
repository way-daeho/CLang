/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memfunction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:55:05 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/28 18:08:11 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memcpy 함수 */
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str[50] = "I love chewing C hahaha";
// 	char str2[50];
// 	char str3[50];

// 	memcpy(str2, str, strlen(str) + 1);
// 	memcpy(str3, "hello", 6);

// 	printf("%s \n", str);
// 	printf("%s \n", str2);
// 	printf("%s \n", str3);

// 	return 0;
// }

/* memmove 함수 */
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str[50] = "I love BBQ Fried Chicken hahaha";

// 	printf("%s \n", str);
// 	printf("memmove 이후 \n");
// 	memmove(str + 23, str + 17, 6);
// 	printf("%s", str);
// }

/* memcmp 함수 */
#include <stdio.h>
#include <string.h>

int main()
{
	int arr[10] = {1, 2, 3, 4, 5};
	int arr2[10] = {1, 2, 3, 4, 5};

	if (memcmp(arr, arr2, 5) == 0)
		printf("arr 과 arr2 는 일치! \n");
	else
		printf("arr 과 arr2 는 일치 안함\n");

	return 0;
}