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
void show_result(int num1, int num2) {
	printf("��� : %d\n", num1 + num2);
}
// �� �� �ִ� �Լ�
// - make, create ���� ǥ���� �ٴ´�.
// - ���� �ܿ��� ���� �ʴ´�.
// - ���ǻ��� : �ܼ� ������ ������ �ʴ´�.
//             ������ �����̴� ����
int make_result(int num1, int num2) {
	return num1 + num2;
}
int main(void) {
	// �� �� �ִ� �Լ��� ȣ�� : ���� = �Լ���(��1, ��2, ��3, ....);
	// - �Է°� ����� ��� �Լ� �ܺο� �����ϴ� ���
	int num1 = 0;
	int num2 = 0;
	int value1 = 0;
	int value2 = 0;
	printf("2�� �Է� >> ");
	scanf_s("%d", &num1); scanf_s("%d", &num2);
	value1 = make_result(num1 * num2, num1 + num2);
	value2 = make_result(num1 - num2, num1 * num2);
	printf("((%d) + (%d)) + ((%d) + (%d)) = %d\n",
		num1 * num2, num1 + num2, num1 - num2, num1 * num2, value1 + value2);
	return 0;
}