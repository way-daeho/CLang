/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   passOrFail.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:14:04 by daehlee           #+#    #+#             */
/*   Updated: 2023/11/30 19:17:13 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	int arr[10];
	int i, ave = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d 번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
		ave = ave + arr[i];
	ave /= 10;
	printf("전체 학생의 평균은 : %d \n", ave);
	for (i = 0; i < 10; i++)
	{
		printf("학생 %d : ", i + 1);
		if (arr[i] >= ave)
			printf("합격\n");
		else
			printf("불합격 \n");
	}
	return (0);
}