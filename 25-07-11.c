#include <string.h>
#include <stdio.h>

void main()
{
	char ss[4];

	strcpy(ss, "XYZ");

	printf("문자열 ss의 내용 ==> %s \n", ss);

	printf("\nss[4]로 선언한 배열에 srycpy를 이용하여 XYZ를 넣어주었음\n");
	printf("중요한점은 ss[4]라고 4칸을 넣어선안된다는것 마지막은 널칸이다\n");
}

