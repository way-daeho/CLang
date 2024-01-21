/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useLibrary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:15:34 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 19:21:14 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 라이브러리의 사용 */
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str1[20] = {"hi"};
// 	char str2[20] = {"hello every1"};

// 	strcpy(str1, str2);

// 	printf("str1 : %s \n", str1);

// 	return 0;
// }

/* strcmp 함수 */
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[20] = {"hi"};
	char str2[20] = {"hello every1"};
	char str3[20] = {"hi"};

	if (!strcmp(str1, str2))
	{
		printf("%s and %s is equal \n", str1, str2);
	}
	else
	{
		printf("%s and %s is NOT equal \n", str1, str2);
	}

	if (!strcmp(str1, str3))
	{
		printf("%s and %s is equal \n", str1, str3);
	}
	else
	{
		printf("%s and %s is NOT equal \n", str1, str3);
	}

	return 0;
}