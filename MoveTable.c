/* 
 * ������һ�Ű뾶Ϊr��Բ����������λ��(x,y)�����������Բ���������Ƶ�(x1,y1)��
 * ÿ���ƶ�һ������������Բ����Ե�̶�һ����Ȼ��Բ�����������ת����������Ҫ�ƶ����� 
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void steps()
{
	int r, x, y, x1, y1;
	double d;
	int cnt;

	while (scanf("%d%d%d%d%d", &r, &x, &y, &x1, &y1) != EOF)
	{
		d = sqrt((double)(x - x1) * (x - x1) + (y - y1) * (y - y1));
		
		cnt = 0;
		while (d > 0)
		{
			d -= (1 + r * 2);
			cnt++;
		}
		printf("%d\n", cnt);
	}
}

int main()
{
	steps();

	return 0;
}