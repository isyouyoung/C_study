#include <stdio.h>

void main()
{
	int i,j;
	int hap=0;

	for (i=1; i<=4; i++){
		printf("%d��° ���ڸ� �Է��ϼ��� : ",i);
		scanf("%d",&j);
		hap += j;
	}	
	printf(" �հ� ==> %d",hap);
}

