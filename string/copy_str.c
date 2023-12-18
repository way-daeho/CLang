/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:32:40 by daehlee           #+#    #+#             */
/*   Updated: 2023/12/18 16:34:21 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	int copy_str(char *desst, char *src);

	src 의 문자열을 dest 로 복사한다. 단, dest 의 크기가 반드시 src 보다 커야 한다.
*/

int copy_str(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++; // 그 다음 문자를 가리킨다.
		dest++;
	}
	*dest = '\0';

	return 1;
}