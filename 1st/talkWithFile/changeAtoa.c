/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   changeAtoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daehlee <daehlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 02:48:01 by daehlee           #+#    #+#             */
/*   Updated: 2024/01/06 02:53:28 by daehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 특정한 파일을 입력 받아서 소문자를 대문자, 대문자를 소문자로 변경하는 프로그램 */

// #include <stdio.h>

// int main()
// {
// 	FILE *fp = fopen("some_data.txt", "r+");
// 	char c;

// 	if (fp == NULL)
// 	{
// 		printf("파일 열기를 실패했습니다! \n");
// 		return 0;
// 	}

// 	while ((c = fgetc(fp)) != EOF)
// 	{
// 		/* c 가 대문자일 경우 */
// 		if (65 <= c && c <= 90)
// 		{
// 			/* 한 칸 뒤로 가서 */
// 			fseek(fp, -1, SEEK_CUR);
// 			/* 소문자로 바뀐 c 를 출력한다. */
// 			fputc(c + 32, fp);
// 		}

// 		/* c 가 소문자일 경우 */
// 		else if (97 <= c && c <= 122)
// 		{
// 			fseek(fp, -1, SEEK_CUR);
// 			fputc(c - 32, fp);
// 		}
// 	}

// 	fclose(fp);
// }

#include <stdio.h>

int main()
{
	FILE *fp = fopen("some_data.txt", "r+");
	char c;

	if (fp == NULL)
	{
		printf("파일 열기를 실패하였습니다! \n");
		return 0;
	}

	while ((c = fgetc(fp)) != EOF)
	{
		/* c 가 대문자일 경우 */
		if (65 <= c && c <= 90)
		{
			/* 한 칸 뒤로 가서*/
			fseek(fp, -1, SEEK_CUR);
			/* 소문자로 바뀐 c 를 출력한다*/
			fputc(c + 32, fp);
			/*

			쓰기 - 읽기 모드 전환을 위해서는 무조건
			fseek 함수와 같은 파일 위치 지정자 설정 함수들을
			호출해야 한다.

			*/
			fseek(fp, 0, SEEK_CUR);
		}
		/* c 가 소문자일 경우*/
		else if (97 <= c && c <= 122)
		{
			fseek(fp, -1, SEEK_CUR);
			fputc(c - 32, fp);
			fseek(fp, 0, SEEK_CUR);
		}
	}

	fclose(fp);
}