/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:30:15 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/10 13:30:47 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* & 연산자 */
#include <stdio.h>
int main() {
	int a;
	a = 2;

	printf("%p \n", &a);
	return 0;
}