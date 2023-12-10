/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constPointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:43:46 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 13:50:41 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 상수 포인터? */

// #include <stdio.h>
// int main()
// {
// 	int a;
// 	int b;
// 	const int *pa = &a;

// 	*pa = 3; // 올바르지 않은 문장
// 	pa = &b; // 올바른 문장
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int a;
// 	int b;
// 	int *const pa = &a;

// 	*pa = 3; // 올바른 문장
// 	pa = &b; // 올바르지 않은 문장

// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int a;
// 	int b;
// 	const int *const pa = &a;

// 	*pa = 3; // 올바르지 않은 문장
// 	pa = &b; // 올바르지 않은 문장

// 	return 0;
// }