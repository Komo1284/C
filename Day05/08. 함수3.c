#include <stdio.h>
// �⺻������ �Լ� - ���� ������� ����
void program(void) {
	int num1 = 0; int num2 = 0;
	printf("�� ���� �Է� >> ");
	scanf_s("%d", &num1); scanf_s("%d", &num2);
	printf("��� : %d\n", num1 + num2);
}
// ��ȯ���� �ִ� �Լ�
int get_result(void) {
	int num1 = 0; int num2 = 0;
	printf("�� ���� �Է� >> ");
	scanf_s("%d", &num1); scanf_s("%d", &num2);
	return num1 + num2;
}
// �Ű������� �ִ� �Լ�
// �� ���� ��쿡 show, print ���� �ٴ´�.
// PARAMETER(�Ű�����) : ȣ��� �� �־��� ������ �ʱ�ȭ��ų ����
// - �ش� �Լ� ���ο��� ����ǰ� ���Ǵ� ����
void show_result(int num1, int num2) {
	printf("��� : %d\n", num1 + num2);
}

int main(void) {
	// �⺻�Լ��� ȣ�� : �Լ���();
	// program();

	// ��ȯ���� �ִ� �Լ��� ȣ�� : ���� = �Լ���();
	// int num1 = get_result();
	// int num2 = get_result();
	// printf("4�� ������ �� : %d\n", num1 + num2);

	// �Ű������� �ִ� �Լ��� ȣ�� : �Լ���(��1, ��2, ...);
	int num1 = 100;
	int num2 = 5;
	show_result(num2, num1);
	return 0;
}