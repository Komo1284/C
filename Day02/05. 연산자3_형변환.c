#include <stdio.h>

int main(void) {
	// ��������� ���� ������ ���� ����� �޶����� ��찡 ����
	// - ������ �ڷ����� ���߿� ����Ǵ� �͵� ����ؾ� ������..
	//   ���� ����� �� ����.
	int count1 = 0;
	int count2 = 0;
	double result = 0;
	printf("������� ���� >> ");
	scanf_s("%d", &count1);
	printf("����� ���� >> ");
	scanf_s("%d", &count2);
	
	result = (double)count1 / (double)count2;

	printf("�δ� ���� : %d��\n", (int)result);
	printf("���� ���� : %d��\n", count1 % count2);
	// �ڷ������� ���� ������ ���� �� ��� �ٲ㾲�� ���� �����ڸ� ����Ѵ�.
	// -> ����ȯ ������
	// -> (�ڷ���)��󺯼�
	printf("���� : %.2lf��\n", result);
	return 0;
}