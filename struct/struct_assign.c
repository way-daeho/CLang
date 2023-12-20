/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_assign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:59:48 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/20 18:01:29 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// struct TEST
// {
// 	int i;
// 	char c;
// };
// int main()
// {
// 	struct TEST st, st2;

// 	st.i = 1;
// 	st.c = 'c';

// 	st2 = st;

// 	printf("st2.i : %d \n", st2.i);
// 	printf("st2.c : %c \n", st2.c);

// 	return 0;
// }

#include <stdio.h>
char copy_str(char *dest, char *src);
struct TEST
{
	int i;
	char str[20];
};
int main()
{
	struct TEST a, b;

	b.i = 3;
	copy_str(b.str, "hello, world");

	a = b;

	printf("a.str : %s \n", a.str);
	printf("a.i : %d \n", a.i);

	return 0;
}
char copy_str(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return 1;
}
