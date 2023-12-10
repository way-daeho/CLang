/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startPointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:32:35 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 13:33:38 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 포인터의 시작 */
#include <stdio.h>
int main() {
	int *p;
	int a;

	p = &a;

	printf("포인터 p 에 들어 있는 값 : %p \n", p);
	printf("int 변수 a 가 저장된 주소 : %p \n", &a);

	return 0;
}
