#include <stdio.h>

int input_data(void) {
	int data = 0;
	printf(">> "); scanf_s("%d", &data);
	if (data >= 0 && data <= 100) return data;
	else return -1;
}

int main(void) {
	// �Լ���������
	// - 0���� 100������ �������� �Է��� �޾� ��ȯ�ϴ� �Լ���
	//   �����ϼ���.
	// - �ش� ������ ��� ���� �Է����� ��� -1�� ���ɴϴ�.

	// �����ͺ�������
	// - ������ ������ �Լ��� �غ�� �����ͺ����� �̿��� ����
	//   �Է��� �ް�, �� ���� ����ϼ���.
	// - ��, �� �� -1�� �ƴ� ���� ���� ����ϰ�, �� �ܿ���
	//   <����Ұ�>��� ����ϼ���.
	int num1 = 0;		int num2 = 0;
	int* pnum1 = &num1; int* pnum2 = &num2;
	printf("ù��° ������ �Է��ϼ���");
	*pnum1 = input_data();
	printf("�ι�° ������ �Է��ϼ���");
	*pnum2 = input_data();
	if (*pnum1 != -1 && *pnum2 != -1) {
		printf("��� : %d\n", *pnum1 + *pnum2);
	}
	else {
		printf("����Ұ�\n");
	}
	return 0;
}