/* 소스: 04integer.c */

#include <stdio.h>

int main(void)
{
	short sVar = 32000; // -32767 ~ 32767
	int iVar = -2140000000; // 약 21억 정도까지 저장 가능

	printf("저장 값: %d %d\n", sVar, iVar);

	// C99 이후 추가된 자료형: 64비트의 정수형 지원
	long long dist1 = 2720000000000; // 지구와 천왕성 간의 거리(km) 약 27억 2천
	__int64 dist2 = 4500000000000; // 태양과 해왕성 간의 거리(km) 약 45억

	// long long과 __int64를 출력할 경우, 형식제어문자를 %lld로 기술
	printf("지구와 천왕성 간의 거리(km): %lld\n", dist1);
	printf("태양과 해왕성 간의 거리(km): %lld\n", dist2);

	return 0;
}