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

	printf("�� �ڵ�� �� �迭�� ���� �־����� Ȥ�� �� ���� �־�����\n"
		"��� ���� 0���� �־����� ������� ������ �� �ִ� �ڵ��\n"
		"�迭�� 0���� ���� ���� ����� 0�� ���� �迭�� {0}\n"
		"���� �����Ҷ��� ��簪�� 0�� ���°� �� �� �־���.\n"); 
}
