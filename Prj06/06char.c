/* 소스: 06char.c */

#include <stdio.h>

int main(void)
{
	char c1 = 'a';
	char c2 = 65;
	char c3 = '\127';
	char c4 = '\x57';

	// %c는 문자가 출력되며, %d는 문자의 코드 값 십진수가 출력된다
	printf("문자 값(문자): %c %c %c %c\n", c1, c2, c3, c4);
	printf("코드 값(번호): %d %d %d %d\n", c1, c2, c3, c4);

	return 0;
}