#include <stdio.h>

int main(void) {
	int num1 = 10;
	int num2 = 15;
	// ������ ������ ���� �غ���� �ʴ´�. �������̴�.
	// - ��󺯼��� ������ �ڷ������� �غ��ϴ� ��
	int* pnum1;
	int* pnum2; // ���� ���� �Ǽ� ������ ���� p�� �ٿ� ����

	// &�� �������� ������ ��
	pnum1 = &num1;
	pnum2 = &num2;

	// *�� �������� ������ ��
	printf("�տ��� : %d\n", *pnum1 + *pnum2);
	printf("������ : %d\n", *pnum1 - *pnum2);
	printf("������ : %d\n", *pnum1 * *pnum2);
	printf("������ : %.2lf\n", *pnum1 / (double)*pnum2);
	return 0;
}