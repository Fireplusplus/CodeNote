/* 
 * һ��������ֻ��һ�����ֳ�����һ�Ρ�
 * �����������ֶ��ǳɶԳ��ֵġ����ҳ�������֡���ʹ��λ���㣩
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[99] = {0};
	int i = 0, j= 0, k = 0;
	int add = 0;
	int ret = 0;

	for (i = 0; i < 99; i += 2) {
		arr[i] = i;
		arr[i + 1] = i;
	}
	for (i = 0; i < 99; i++) {
		ret ^= arr[i];
	}
	
	/*for (i = 0; i < 99; i++) {
		for (j = 0; (j < 99) && (j != i); j++) {
			if ((arr[i] ^ arr[j]) == arr[i]) {
				add = 0;
				break;
			}
			else
				add = i;
		}
		if (add != 0)
			break;
	}
	*/
	printf("%d", ret);

	system("pause");
	return 0;
}