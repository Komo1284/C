#include <stdio.h>

int main(void) {
	int n1 = 0;
	int n2 = 0;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d", &n1);
	scanf_s("%d", &n2);
	// ������ �迭�� 0���� �׾��� ����� ���� �� ����
	// -> 0�� �ɷ����� ���ǹ��� �����ϼ���.
	if (n2 == 0) {
		printf("��� : ����Ұ�\n");
	}
	else {
		if (n1 % n2 == 0) {
			printf("��� : %d\n", n1 / n2);
		}
		else {
			printf("��� : %.1lf\n", n1 / (double)n2);
		}
	}
	return 0;
}