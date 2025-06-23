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

	printf("25-06-23 메모임 왜 '퍼센트+줄바꿈(달러n)'이 정확하게 작동하는지 알수없음 찾아볼 예정");
}

