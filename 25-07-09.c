#include <stdio.h>

void main()
{
	char ss[5] = "abcd";
	char tt[5];
	int i;

	for(i=0 ; i<4 ; i++)
	{
		tt[i] = ss[3-i] ;
	}
	tt[4] = '\0';

	printf("거꾸로 출력한 결과==> %s \n", tt);

	printf("\n");
	printf("이번 코드는 8장 p22 배열과 문자열에서 문자열을 반대로 출력하는 프로그램 입니다\n");
	printf("char 타입의 [5]칸 배열을 2개를 만들고 처음 abcd가 들어있는 배열 ss를 배열 tt에\n");
	printf("반대 순서로 넣어주는 프로그램입니다 구조는 for문을 이용한 0,1,2,3 순서를\n");
	printf("tt[i] = ss[3-i]로 tt0 tt1 tt2번자리에 ss에 abcd를 반대로 넣는 형식으로 작동합니다\n");
	printf("주의사항으로는 tt[4] 즉 마지막에는 널 문자를 삽입해야한다는것입니다 => 배열의\n");
	printf("마지막 칸은 널 문자 자리이므로 따로 코드를 작성하여 넣어주는 구조로 되어있습니다\n");	
}

