#include <stdio.h>

struct node {
	int num1;
	int num2;
};

// �Լ��� ����� ����.
void input_data(struct node* pnode) {
	printf("���� 2�� �Է� >> ");
	scanf_s("%d", &pnode->num1);
	scanf_s("%d", &pnode->num2);
}
void show_data(struct node* pnode) {
	printf("��� : %.2lf\n", (pnode->num1 + pnode->num2) / 2.0);
}
int main(void) {
	// �ǽ�
	struct node node1 = { 0,0 };
	// �����ͺ����� �����ϰ�, ����� ����ü������ �����մϴ�.
	/*
	struct node* pnode = &node1;
	*/
	// ������ ������ �̿��Ͽ� ������ 2���� �Է��� �޾� ����ϰ�
	/*
	printf("���� 2�� �Է� >> ");
	scanf_s("%d", &pnode->num1);
	scanf_s("%d", &pnode->num2);
	*/
	input_data(&node1);
	// ������ ������ �̿��Ͽ� ������ ����� ���Ͽ� ����ϼ���.
	/*
	printf("��� : %.2lf\n", (pnode->num1 + pnode->num2) / 2.0);
	*/
	show_data(&node1);
	return 0;
}