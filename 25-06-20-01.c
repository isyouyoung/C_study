#include <stdio.h>

void main()
{
	int i,j,cnt;
	int hap = 0;

	for (i=1; i<=4; i++){
	printf("%d번째 숫자를 입력하세요 : ",i);
	scanf("%d\n",&cnt);
	hap += i;
	}	
}

