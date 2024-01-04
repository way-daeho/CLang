/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fseekToStart.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 03:15:04 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/05 03:17:33 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main()
{
	/* 현재 fp 에 abcdef 가 들어있는 상태*/
	FILE *fp = fopen("Alphabet.txt", "r");
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	fgetc(fp);
	/* d 까지 입력받았으니 파일 위치지정자는 이제 e 를 가리키고 있다 */
	fseek(fp, 0, SEEK_SET);
	printf("다시 파일 처음에서 입력 받는다면 : %c \n", fgetc(fp));
	fclose(fp);
	return 0;
}