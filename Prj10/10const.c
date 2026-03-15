/* 소스: 10const.c */

#include <stdio.h>

int main(void)
{
	// 키워드 const로 상수 만들기
	double const e = 2.718281; // 오일러 수

	// e = 2.71828; -> 상수는 수정할 수 없으므로 주석을 빼면 컴파일 오류 발생
	printf("오일러 수 %f\n", e);

	return 0;
}