/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:53:11 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/26 16:53:14 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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