#include <stdio.h>

void main()
{
	printf("\n");
	printf("2025-07-03 ���ο��� �ڵ�\n\n");

	int aa[] = {10, 20, 30, 40, 50, 60, 70};
	int count;

	count = sizeof(aa) / sizeof(int);
	printf("count = sizeof(aa) / sizeof(int);\n");
	printf("aa�� ������ �� �迭�� ������aa[7]�� ���� �迭���� Ÿ���� int�� ������\n");
	printf("���� ����� �˼��ְ� �մϴ�\n\n");

	printf("�迭 aa[]�� ����� ������ %d �Դϴ�. \n", count);
}


