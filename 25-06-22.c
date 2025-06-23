#include <stdio.h>

void main()
{
	int aa[4];
	int hap=0;
	int i;

	for (i=0 ; i<=3 ; i++)
	{
		printf("%d번째 숫자를 입력하세요 : ", i+1);
		scanf("%d", &aa[i] );
		hap += aa[i];
		printf("%d번 누적 합계 ==> %d\n",i+1,hap);
	}

	printf(" 총 합 계 ==> %d \n", hap);
}

