#include <stdio.h>

int main(void) {
	double dnum1 = 0;
	double dnum2 = 0;
	printf("�Ǽ� 2�� �Է� >> ");
	scanf_s("%lf", &dnum1);
	scanf_s("%lf", &dnum2);
	// if���� ����� �� ���ǻ���
	// - ����� ���� �ʿ��� ���� �ƴ϶�� ��ø���� ���ƾ� ��
	// - �� ���� ���� ����� ���� ������������ ���� ���� else�̴�.
	if (dnum1 > dnum2) {
		printf("%.2lf�� %.2lf���� �� Ů�ϴ�.\n", dnum1, dnum2);
	}
	else {
		printf("%.2lf�� %.2lf���� �� ũ�ų� �����ϴ�.\n", dnum2, dnum1);
	}
	return 0;
}