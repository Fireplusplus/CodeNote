/* ��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���� */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

unsigned int(*fun[2])(unsigned int);

unsigned int Sum_0(unsigned int n)
{
	return 0;
}

unsigned int Sum_n(unsigned int n)
{
	return n + fun[!!n](n - 1);
}

unsigned int(*fun[2])(unsigned int) = { Sum_0, Sum_n };

int main()
{
	unsigned int ret = Sum_n(100);

	return 0;
}