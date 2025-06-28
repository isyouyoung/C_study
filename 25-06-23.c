#include <stdio.h>

void main()
{
	int aa[4] = {100, 200, 300, 400};
	int bb[]  = {100, 200, 300, 400};
	int cc[4] = {100, 200};
	int dd[4] = {0};
	int i;

	for (i=0 ; i<=3 ; i++)
		printf("aa[%d]==>%d\t", i, aa[i] );
	printf("\n");

	for (i=0 ; i<=3 ; i++)
		printf("bb[%d]==>%d\t", i, bb[i] );
	printf("\n");

	for (i=0 ; i<=3 ; i++)
		printf("cc[%d]==>%d\t", i, cc[i] );
	printf("\n");

	for (i=0 ; i<=3 ; i++)
		printf("dd[%d]==>%d\t", i, dd[i] );
	printf("\n\n");

	printf("이 코드는 각 배열에 값을 넣었을때 혹은 빈 값을 넣었을때\n"
		"모든 값을 0으로 넣었을때 결과값을 공부할 수 있는 코드로\n"
		"배열의 0부터 값이 들어가며 빈곳은 0이 들어가고 배열을 {0}\n"
		"으로 선언할때도 모든값에 0이 들어가는걸 알 수 있었다.\n"); 
}
