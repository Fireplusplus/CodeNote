#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

char * my_strcpy(char * dest, const char * src)	//constʹsrc��������ֵ����ֹwhile��dest��srcд��
{
	char *ch = dest;
	assert(dest != NULL);						//���԰�������
	assert(src != NULL);
	while (*dest++ = *src++)					//while���	
		;
	return dest;								//��ʽ���� printf("%s", my_strcpy(dest, src));
}

int main(void)
{
	char arr1[20];
	char arr2[] = "hello world!";
	//char *arr2 = NULL;

	my_strcpy(arr1, arr2);

	printf("%s", arr1);
	system("pause");
	return 0;
}