#include <stdio.h>

int main(void) {
	int num1 = 0;
	int num2 = 0;
	
	// ���� �� ��쿡��, & �������� �ȵ�
	int* pnum1 = &num1;
	int* pnum2 = &num2;

	// ������ ��ü��.
	printf("���� 2�� �Է� >> ");
	scanf_s("%d", &*pnum1);
	// ���� : ���ʿ� �����ͺ����� �����ؼ� �ּҰ��� �䱸�ϴ� ���
	// - *�� �Ⱥ��̰� ���� ��쵵 ����
	scanf_s("%d", pnum2);
	// ���� : ������ ������ �ٷ� &���̸� ū�ϳ�

	printf("�տ��� : %d\n", *pnum1 + *pnum2);
	printf("�� ������ ��� : %.2lf\n", (*pnum1 + *pnum2)/2.0);
	return 0;
}