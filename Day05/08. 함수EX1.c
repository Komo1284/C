#include <stdio.h>

void calculator(void) {
	int num1 = 0;
	int num2 = 0;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("�� : %d\n", num1 + num2);
	printf("�� : %d\n", num1 - num2);
	printf("�� : %d\n", num1 * num2);
	if (num2 == 0) printf("�� : ����Ұ�\n");
	else printf("�� : %d\n", num1 / num2);
}
int main(void) {
	calculator();
	return 0;
}