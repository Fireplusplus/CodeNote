/* 
 * ʹ��main�����Ĳ�����ʵ��һ��������������������Խ�������������
 * ��һ��������-a��ѡ��ִ�мӷ�����-s��ѡ��ִ�м�������-m��ѡ��ִ�г˷���
 * ��-d��ѡ��ִ�г�����������������Ϊ������ 
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int dev(int x, int y)
{
	return x / y;
}

int main(int argc, char * argv[])
{
	int ret = 0;
	int x = (*argv[2] - '0');
	int y = (*argv[3] - '0');

	if (argc != 4)
		exit(0);
	
	if (strcmp(argv[1], "-a") == 0)
		ret = add(x, y);
	else if (strcmp(argv[1], "-s") == 0)
		ret = sub(x, y);
	else if (strcmp(argv[1], "-m") == 0)
		ret = mul(x, y);
	else if (strcmp(argv[1], "-d") == 0)
		ret = dev(x, y);
	else
		exit(0);
	printf("%d\n", ret);

	return 0;
}