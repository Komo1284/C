#include <stdio.h>

int main(void) {
	// ���ǹ��� ���� : ���ӹ����� ���ǹ��� �߰��ϱ�
	// - �� : else�ʿ��� �߰��ϴ°� ����
	int num = 0;
	printf("�Է� >> "); scanf_s("%d", &num);
	// - ���ǹ��� ���ġ�� �����ϴ�.
	// - ���ġ�� �� �Ͻø� �߰�ȣ�� ������ �� �ִ�.
	// - else if ��� ������ ��Ÿ��

	// else if : ����� ���� �ɷ����� ���� ��
	// - �����ؼ� ��Ÿ���� ������̴�.
	/*
	if (num >= 50)		printf("50�̻�\n");
	else if (num >= 40) printf("40�̻�\n");
	else if (num >= 30) printf("30�̻�\n");
	else if (num >= 20) printf("20�̻�\n");
	else if (num >= 10) printf("10�̻�\n");
	else				printf("10�̸�\n");
	*/

	// else if�� �����ϸ� �ڵ尡 ���������� ����
	int value = 0;
	if (num < 10) printf("10�̸�\n");
	else {
		if (num < 20) value = 10;
		else if (num < 30) value = 20;
		else if (num < 40) value = 30;
		else if (num < 50) value = 40;
		else value = 50;
		printf("%d�̻�\n", value);
	}
	
	return 0;
}