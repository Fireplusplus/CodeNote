/* ����һ���ַ��������ַ�����Сд�ַ��ڴ�д��ĸǰ�棬�����ַ����˳�򲻱� */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Move(char *str)
{
	char *left = str, *right;
	int len;
	char tmp;
	if (NULL == str)
		return NULL;

	len = strlen(str);
	right = str + len - 1;
	
	while (left < right)
	{
		while (*left < 'z' && *left > 'a')		//��leftָ���д��ĸ
			left++;
		while (*right < 'Z' && *right > 'A')	//��rightָ��Сд��ĸ
			right--;
		tmp = *left;
		memmove(left, left + 1, (right - left) * sizeof(char));
		*right = tmp;
	}
}

int main()
{
	char arr[] = "AkleBiCeilD";
	Move(arr);
	printf(arr);

	return 0;
}