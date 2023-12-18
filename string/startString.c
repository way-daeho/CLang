/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startString.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:56:39 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/18 14:59:17 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 문자열의 시작 */
#include <stdio.h>
int main() {
	char sentence_1[4] = {'P', 's', 'i', '\0'};
	char sentence_2[4] = {'P', 's', 'i', 0};
	char sentence_3[4] = {'P', 's', 'i', (char)NULL};
	char sentence_4[4] = {"Psi"};

	printf("sentence_1 : %s \n", sentence_1); // %s 를 통헤서 문자열을 출력한다.
	printf("sentence_2 : %s \n", sentence_2);
	printf("sentence3_ : %s \n", sentence_3);
	printf("sentence4_ : %s \n", sentence_4);

	return 0;
}