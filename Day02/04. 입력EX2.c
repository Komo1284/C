#include <stdio.h>

int main(void) {
	// C������ ����� ������ ������ �ݵ�� ���� ��������� ��
	int num1 = 0; int num2 = 0; int num3 = 0;
	double dnum1 = 0; double dnum2 = 0; double dnum3 = 0;
	// �� �Ŀ��� �ʿ��� ���� �̿��ؼ� ������ �������ش�.

	// �ʿ��� �Է��� ���� ���� �� �޾���� ��
	printf("���� 3���� �Է��ϼ��� >> ");
	scanf_s("%d", &num1);	// �Է��� �� �������¸� ����
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	
	printf("�Ǽ� 3���� �Է��ϼ��� >> ");
	scanf_s("%lf", &dnum1);	// ���� �� �Ǽ����µ� ����
	scanf_s("%lf", &dnum2);
	scanf_s("%lf", &dnum3);
	// �ʿ��� ���� Ȯ���Ǿ����� �����ϰ�....

	// �� ����� ����.
	printf("\n����� ����\n");
	printf("->%d<->%d<->%d<-\n", num1, num2, num3);
	printf("����� �Ǽ� : %.2lf, %.2lf, %.2lf\n", dnum1, dnum2, dnum3);
	return 0;
}