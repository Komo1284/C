#include <stdio.h>

int main(void) {
	// ������ ���ʿ� �غ��� ���� �ʿ��� �ڷ��� ����ŭ �غ��Ѵ�.
	// �ʿ��� �͵��� ���߿� �߰��ϸ� ��
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int result = 0;
	printf("���� 3�� �Է� >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	// �������� ����� �����. ������� ������ �� ����
	result = num1 + num2 + num3;

	// ������ ���� �Ǽ����� �غ��ϸ� �ȴ�.
	printf("�Էµ� ������ �� : %d\n", result);
	printf("�Էµ� ������ ��� : %.2lf\n", result / 3.0);
	return 0;
}