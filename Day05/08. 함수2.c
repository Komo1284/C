#include <stdio.h>
// �⺻������ �Լ� - ���� ������� ����
void program(void) {
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	printf("�� ���� �Է� >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	result = num1 + num2;
	printf("��� : %d\n", result);
}
// void : �ڷ����� ������ ���ϴ� Ű�������� �ڷ���
// - �Լ������� ����
// ��ȯ�� : �Լ����ο��� �ʿ��� ���� �ܺη� ������ �� �ĺ��ϱ� ���� ����
// -> ���� �ܺη� �����Ű�� ����
// �� ���� ���� ���, �Լ����� ����� ������
int get_result(void) {
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	printf("�� ���� �Է� >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	result = num1 + num2;
	return result;
}

int main(void) {
	// ��ȯ���� �ִ� �Լ��� ȣ�� : ���� = �Լ���();
	int num1 = get_result();
	int num2 = get_result();
	printf("4�� ������ �� : %d\n", num1 + num2);
	return 0;
}