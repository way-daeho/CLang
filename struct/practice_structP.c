/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice_structP.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:21:08 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/20 17:29:17 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 포인터 갖고 놀기 */
// #include <stdio.h>
// struct TEST
// {
// 	int c;
// };

// int main()
// {
// 	struct TEST t;
// 	struct TEST *pt = &t;

// 	/* pt 가 가리키는 구조체 변수의 c 멤버의 값을 0 으로 한다. */
// 	(*pt).c = 0;

// 	printf("t.c : %d \n", t.c);

// 	/* pt 가 가리키는 구조체 변수의 c 멤버의 값을 1로 한다 */
// 	pt->c = 1;

// 	printf("t.c : %d \n", t.c);

// 	return 0;
// }

/* 헷갈림 */
// #include <stdio.h>
// struct TEST
// {
// 	int c;
// 	int *pointer;
// };
// int main()
// {
// 	struct TEST t;
// 	struct TEST *pt = &t;
// 	int i = 0;

// 	/* t 의 멤버 pointer 는 i 를 가리키게 된다*/
// 	t.pointer = &i;

// 	/* t 의 멤버 pointer 가 가리키는 변수의 값을 3 으로 만든다*/
// 	*t.pointer = 3;

// 	printf("i : %d \n", i);

// 	/*

// 	-> 가 * 보다 우선순위가 높으므로 먼저 해석하게 된다.
// 	즉,
// 	(pt 가 가리키는 구조체 변수의 pointer 멤버) 가 가리키는 변수의 값을 4 로
// 	바꾼다. 라는 뜻이다/

// 	*/
// 	*pt->pointer = 4;

// 	printf("i : %d \n", i);
// 	return 0;
// }

/*
	구조체 포인터 연습
*/
// #include <stdio.h>
// int add_one(int *a);
// struct TEST
// {
// 	int c;
// };
// int main()
// {
// 	struct TEST t;
// 	struct TEST *pt = &t;

// 	/* pt 가 가리키는 구조체 변수의 c 멤버의 값을 0으로 한다. */
// 	pt->c = 0;

// 	/* add_one 함수의 인자에 t 구조체 변수의 멤버 c 의 주소값을 전달 */
// 	add_one(&t.c);

// 	printf("t.c : %d \n", t.c);

// 	return 0;
// }
// int add_one(int *a)
// {
// 	*a += 1;
// 	return 0;
// }