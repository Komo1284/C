#include <stdio.h>

int main(void) {
	// printf�� �̿��ϸ� ����� �ȴ�.
	// - printf�� ��� ���� ������?
	// �� ȿ������ ���� ��Ģ
	// 1) ���ٴ� printf �ѹ�
	// 2) �ʹ� ª���� ���ٷ� ��ģ��.(ȭ�� ����)
	// 3) ������ �� �����ִ� ���� ������ 5������������ �����Ѵ�.
	double dnum1 = 13.1;
	double dnum2 = 13.2;
	double dnum3 = 13.3;
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	printf("1 : %lf\n2 : %lf\n3 : %lf\n", dnum1, dnum2, dnum3);
	printf("%d, %d, %d\n", num1, num2, num3);
	return 0;
}