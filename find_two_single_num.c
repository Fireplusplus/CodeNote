/* 
 * һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
 * �ҳ����������֣����ʵ��
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int xor = 0, and = 0, num1 = 0, num2 = 0;
	int i = 0, digth = 0;
	int arr[] = {1, 3, 5, 4, 3, 6, 5, 1, 7, 6};
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	for (i = 0; i < sz; i++)
	{
		xor ^= arr[i];
	}
	for (digth = 0; digth < sizeof(int); digth++)	//�ҳ�һ����������������ͬ����λ
	{
		if (((xor >> digth) & 1) == 1)
			break;
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> digth) & 1) == 1)			//�Ѳ�ͬ�����ֿ�
			num1 ^= arr[i];
		else
			num2 ^= arr[i];
	}
	printf("%d, %d\n", num1, num2);
	system("pause");
	return 0;
}