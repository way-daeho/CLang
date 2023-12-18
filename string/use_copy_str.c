/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_copy_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:34:34 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/18 16:36:03 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copy_str 사용 예제 */
#include <stdio.h>
int copy_str(char *src, char *dest);

int main()
{
	char str1[] = "hello";
	char str2[] = "hi";

	printf("복사 이전 : %s \n", str1);

	copy_str(str1, str2);

	printf("복사 이후 : %s \n", str1);

	return 0;
}

int copy_str(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++; // 그 다음 문자를 가리킨다.
		dest++;
	}
	*dest = '\0';

	return 1;
}