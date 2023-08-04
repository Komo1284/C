#include <stdio.h>
#include <malloc.h>

void program(double* parr, int size) {
	double avg = 0;
	for (int i = 0; i < size; i += 1) {
		parr[i] = 0;
	}
	printf("%d�� �Ǽ� �Է� >> ", size);
	for (int i = 0; i < size; i += 1) {
		scanf_s("%lf", &parr[i]);
	}
	for (int i = 0; i < size; i += 1) {
		avg += parr[i];
	} avg /= size;
	printf("\n����� �� :");
	for (int i = 0; i < size; i += 1) {
		printf(" %.1lf", parr[i]);
	} printf("\n��� : %.2lf\n", avg);
}
// ������ ������ ������ �� ����
// - *�� �� �� �� �þ.
// - ���������ͺ���(���������ͺ���)
void deleteThis(void** parr) {
	// �Լ��� ó���ҷ��� �����ͺ����� �����ؾ� ��
	if (*parr != NULL) {
		free(*parr);
		*parr = NULL;
	}
	// ��
	// void - �Լ���ȯ������ ���������� �ڷ���
	// void* - �뵵�� �������� ���� �ּҰ��� �ٷ�� �����ͺ���
	// void** - ���� ���������ͺ����� �����ϱ� ���� ���������ͺ���
}

int main(void) {
	// 1) �츮�� �����ų �Լ� program�� �����ϼ���.
	// - �Ǽ��迭�� �� ũ�⸦ ���޹޾� �̿��մϴ�.
	// - ���޵� �迭 ������ �̿��� ���� �Է��� �մϴ�.
	// - ����� ������ ��� ����մϴ�.
	// - ����� ������ �̿��� ����� ���Ͽ� ����մϴ�.

	// 2) �̸� �����ϱ� ���� �����Ҵ��ڵ带 �����ϼ���.
	int size = 6;
	double* parr = (double*)malloc(sizeof(double) * size);
	
	if (parr == NULL) printf("�����Ҵ����\n");
	else program(parr, size);
	
	deleteThis(&parr);
	return 0;
}