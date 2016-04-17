#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/*
* ʵ��һ�����������������ַ����е�k���ַ���
* AABCD����һ���ַ��õ�ABCDA
* AABCD���������ַ��õ�BCDAA
*/
char * left_move(char * src, int k)
{
	int i = 0;
	int len = strlen(src);
	char tmp = 0;
	assert(src);

	for (i = 0; i < len / 2; i++)			//��������
	{
		tmp = *(src + i);
		*(src + i) = *(src + len - 1 - i);
		*(src + len - 1 - i) = tmp;
	}

	for (i = 0; i < (len - k) / 2; i++)		//������
	{
		tmp = *(src + i);
		*(src + i) = *(src + len - k - 1 - i);
		*(src + len - k - 1 - i) = tmp;
	}

	for (i = 0; i < k / 2; i++)		//�Ҵ�����
	{
		tmp = *(src + len - k + i);
		*(src + len - k + i) = *(src + len - 1 - i);
		*(src + len - 1 - i) = tmp;
	}

	return src;
}

/* 
 * �ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
 * ���磺����s1 �� AABCD��s2 = BCDAA������1������s1=abcd��s2=ACBD������0.
 */
int is_string_move(char * left, char * right)
{
	int len1 = strlen(left);
	int len2 = strlen(right);
	int i = 0;
	assert(left);
	assert(right);
	for (i = 0; i < len1; i++)		//��������left����right�Ƚϣ�ѭ��len�κ󣬸պûص���ʼλ��
	{
		if (0 == strcmp(left_move(left, 1), right))
			return 1;
	}
	for (i = 0; i < len1; i++)		//��������right����left�Ƚ�,�൱������left����right�Ƚ�
	{
		if (0 == strcmp(left_move(left, 1), right))
			return 1;
	}
	return 0;
}
int is_string_move2(char * left, char * right)
{
	int len_left = strlen(left);
	int len_right = strlen(right);

	assert(left);
	assert(right);
	
	if (len_left != len_right)		//���Ȳ��ȣ��ز�����
		return 0;

	strncat(left, left, len_left);		
	if (strstr(left, right) != NULL)
		return 1;
	else
		return 0;
}
int main()
{
	char arr[] = "aabcd";
	char arr2[20] = "abcda";
	//char *ret = left_move(arr, 2);

	if (is_string_move2(arr2, arr))
		printf("yes\n");
	else
		printf("no\n");

	//printf("%s\n", ret);
	system("pause");
	return 0;
}