#include <stdio.h>

void main()
{
	char ss[8] = "Basic-C";
	int i;

	ss[5] = '#';
	
	for(i=0 ; i<8 ; i++)
	{
		printf("ss[%d] ==> %c \n", i, ss[i]);
	}

	printf("문자열 배열 ss => %s \n",ss);
	printf("\n");
	printf("크기가 8인 문자형 배열을 선언하고 초기화함\n");
	printf("여섯 번째 문자를 바꿈\n");
	printf("여덞 번 반복하면서 배열 ss의 각 문자를 출력함\n");
	printf("배열 ss의 전체 문자열을 출력함\n");

}

