#include <stdio.h>

struct node {
	int num1;
	int num2;
};

int main(void) {
	struct node node1 = { 33333, 66666 };
	struct node node2 = { 0, 0 };
	struct node node3 = { 0, 0 };
	struct node node4 = { 0, 0 };
	// �ǽ�
	// 1) node1�� ��� ��������� ���� node2�� �����ϼ���.
	node2 = node1;
	// 2) node1�� num1�� node3�� ���� ��������� �����ϼ���.
	node3.num1 = node1.num1;
	// 3) node1�� num2�� node4�� ���� ��������� �����ϼ���.
	node4.num2 = node1.num2;
	// 4) �� ����ü������ ����� ���� ����ϼ���.
	printf("%d %d\n", node1.num1, node1.num2);
	printf("%d %d\n", node2.num1, node2.num2);
	printf("%d %d\n", node3.num1, node3.num2);
	printf("%d %d\n", node4.num1, node4.num2);
	return 0;
}