#include <stdio.h>

// node : �ڷᱸ������ ���� �����ϰ� �ִ� ���� ����
// - ���� ���� �̸��� ����ġ ������ ���� �����
struct node {
	int num1;
	int num2;
};

int main(void) {
	// ����ü������ �����Ѱ� ������
	// ����ü��Ī + ���� �������� ���� ��
	struct node node1 = { 15, 30 };
	printf("����ü������ ����� �� : %d, %d\n",
		node1.num1, node1.num2);
	return 0;
}