#include <stdio.h>

void main()
{
	printf("\n");
	printf("2025-07-03 공부예정 코드\n\n");

	int aa[] = {10, 20, 30, 40, 50, 60, 70};
	int count;

	count = sizeof(aa) / sizeof(int);
	printf("count = sizeof(aa) / sizeof(int);\n");
	printf("aa의 사이즈 즉 배열의 사이즈aa[7]을 실제 배열값의 타입인 int로 나눠서\n");
	printf("각각 사이즈를 알수있게 합니다\n\n");

	printf("배열 aa[]의 요소의 개수는 %d 입니다. \n", count);
}


