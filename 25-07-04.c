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

	printf("���ڿ� �迭 ss => %s \n",ss);
	printf("\n");
	printf("ũ�Ⱑ 8�� ������ �迭�� �����ϰ� �ʱ�ȭ��\n");
	printf("���� ��° ���ڸ� �ٲ�\n");
	printf("���� �� �ݺ��ϸ鼭 �迭 ss�� �� ���ڸ� �����\n");
	printf("�迭 ss�� ��ü ���ڿ��� �����\n");

}

