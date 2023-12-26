/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onlyAddress.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:54:14 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 19:56:33 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 임의의 주소값 p 로 부터 byte 만큼 읽은 함수 */
#include <stdio.h>
int read_char(void *p, int byte);
int main()
{
	int arr[1] = {0x12345678};

	printf("%x \n", arr[0]);
	read_char(arr, 4);
}
int read_char(void *p, int byte)
{
	do
	{
		printf("%x \n", *(char *)p);
		byte--;

		p = (char *)p + 1;
	} while (p && byte);

	return 0;
}