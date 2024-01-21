/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:11:13 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/20 17:17:45 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 구조체 포인터 */
// #include <stdio.h>
// struct test
// {
// 	int a, b;
// };

// int main()
// {
// 	struct test st;
// 	struct test *ptr;

// 	ptr = &st;

// 	(*ptr).a = 1;
// 	(*ptr).b = 2;

// 	printf("st 의 a 멤버 : %d \n", st.a);
// 	printf("st 의 b 멤버 : %d \n", st.b);

// 	return 0;
// }

/* 구조체 포인터 2 */
#include <stdio.h>
struct test
{
	int a, b;
};
int main()
{
	struct test st;
	struct test *ptr;
	ptr = &st;
	ptr->a = 1;
	ptr->b = 2;
	printf("st 의 a 멤버 : %d \n", st.a);
	printf("st 의 b 멤버 : %d \n", st.b);

	return 0;
}