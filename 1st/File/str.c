/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:53:11 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 19:04:38 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char compare(char *str1, char *str2)
{
	while (*str1)
	{
		/* code */
		if (*str1 != *str2)
		{
			return 0;
		}

		str1++;
		str2++;
	}

	if (*str2 == '\0')
		return 1;

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