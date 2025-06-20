#include <stdio.h>

void main()
{
	int i,j;
	int hap=0;

	for (i=1; i<=4; i++){
		printf("%d번째 숫자를 입력하세요 : ",i);
		scanf("%d",&j);
		hap += j;
	}	
	printf(" 합계 ==> %d",hap);
}

