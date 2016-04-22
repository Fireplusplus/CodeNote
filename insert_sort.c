#include <stdio.h>
#include <stdlib.h>

#define N 1000

/*
* ��������---�ǵݼ�
* ��Ϊ�����е�һ�������Ѿ��ź����
*/
void insert_sort(int *a, int num)
{
	int tmp = 0;				//���ƶ���һ������ʱ���
	int i = 0, j = 0;

	for (i = 1; i < num; i++) {
		tmp = a[i];
		j = i - 1;
		while ((tmp<a[j]) && (j >= 0)) {
			a[j + 1] = a[j];	//���ϴ��ƺ���	
			j--;
		}
		a[j + 1] = tmp;		//�����������Ʒ�����ȷ��λ��
	}
}
int main(void)
{
	int arr[N] = { 0 };
	int i = 0, data = 1000;

	/*��ʼ����������*/
	for (i = 0; i < N; i++){
		arr[i] = data--;
	}

	/*����ͳһ�ӿ�*/
	insert_sort(arr, N);

	/*��ӡ����Ļ*/
	for (i = 0; i < 1000; i++){
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;
}
