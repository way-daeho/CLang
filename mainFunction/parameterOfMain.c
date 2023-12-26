/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameterOfMain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:06:33 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 20:10:43 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	printf("받은 인자의 개수 : %d \n", argc);
// 	printf("이 프로그램의 경로 : %s \n", argv[0]);

// 	return 0;
// }

/* 인자를 갖는 메인 함수 */
#include <stdio.h>
int main(int argc, char **argv)
{
	int i;
	printf("받은 인자의 개수 : %d \n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("이 프로그램이 받은 인자 : %s \n", argv[i]);
	}

	return 0;
}