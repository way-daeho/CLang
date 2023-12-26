/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifdef.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 19:25:52 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 19:26:50 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define A
int main()
{
#ifdef A
	printf("AAAA \n");
#endif
#ifdef B
	printf("BBBB \n");
#endif
	return 0;
}