#include <stdio.h>

void main()
{
	int aa[4];
	int hap=0;
	int i;

	for (i=0 ; i<=3 ; i++)
	{
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i+1);
		scanf("%d", &aa[i] );
		hap += aa[i];
		printf("%d�� ���� �հ� ==> %d\n",i+1,hap);
	}

	printf(" �� �� �� ==> %d \n", hap);

	printf("25-06-23 �޸��� �� '�ۼ�Ʈ+�ٹٲ�(�޷�n)'�� ��Ȯ�ϰ� �۵��ϴ��� �˼����� ã�ƺ� ����");
}

