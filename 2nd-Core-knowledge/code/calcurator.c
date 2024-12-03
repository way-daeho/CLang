/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcurator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 23:21:56 by daehlee           #+#    #+#             */
/*   Updated: 2024/11/26 23:28:50 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// %연산자는 오직 정수형 데이터에서만 연산이 가능.
// %%는 %를 표시하기 위한 방법

/**
 * 컴파일러 -> 산술 변환 과정
 * 어떠한 자료형이 다른 두 변수를 연산할 때, 숫자의 범위가 큰 자료형으로 자료형을 변경
 */
/* 비트 연산 */
#include <stdio.h>
int main(void)
{
	int a = 0xAF; // 10101111
	int b = 0xB5; // 10110101

	printf("%x \n", a & b);	 // a & b = 10100101
	printf("%x \n", a | b);	 // a | b = 10111111
	printf("%x \n", a ^ b);	 // a ^ b = 0011010
	printf("%x \n", -a);	 // -a = 1....1 01010000
	printf("%x \n", a << 2); // a << 2 = 1010111100
	printf("%x \n", b >> 3); // b >> 3 = 0010110

	return (0);
}