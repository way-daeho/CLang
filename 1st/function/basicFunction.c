/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basicFunction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:06:27 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 18:21:41 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int print_hello()
// {
// 	printf("Hello!! \n");
// 	return 0;
// }

// int main()
// {
// 	printf("함수를 불러보자 : ");
// 	print_hello();

// 	printf("또 부를까? ");
// 	print_hello();
// 	return 0;
// }

/* 함수의 리턴 */
// #include <stdio.h>
// int return_func()
// {
// 	printf("난 실행된다 \n");
// 	return 0;
// 	printf("난 안돼 ㅠㅠ \n");
// }
// int main()
// {
// 	return_func();
// 	return 0;
// }

/* 반환값 */
// #include <stdio.h>
// int ret() { return 1000; }
// int main()
// {
// 	int a = ret();
// 	printf("ret() 함수의 반환값 : %d \n", a);

// 	return 0;
// }

/* 마술 상자 */
// #include <stdio.h>
// int magicbox(int i)
// {
// 	return i += 4;
// }
// int main()
// {
// 	int i;
// 	printf("마술 상자에 집어넣을 값 : ");
// 	scanf("%d", &i);

// 	printf("마술 상자를 지나면 : %d \n", magicbox(i));
// 	return 0;
// }

/* 함수의 인자 */
#include <stdio.h>
int slave(int master_money)
{
	master_money += 10000;
	return master_money;
}
int main()
{
	int my_money = 100000;
	printf("2009.12.12 재산 : $%d \n", slave(my_money));

	return 0;
}