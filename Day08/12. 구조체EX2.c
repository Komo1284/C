#include <stdio.h>

struct node {
	int num1;
	int num2;
};

int main(void) {
	struct node node1 = { 0, 0 };
	printf("������ ���� 2�� �Է� >> ");
	scanf_s("%d", &node1.num1);
	scanf_s("%d", &node1.num2);
	printf("�� ������ �� : %d\n", node1.num1 + node1.num2);
	printf("�� ������ �� : %d\n", node1.num1 * node1.num2);
	return 0;
}