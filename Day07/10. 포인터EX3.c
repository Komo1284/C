#include <stdio.h>

int main(void) {
	// ������ ���°� �޶���������
	// �� �ܿ� �䱸�ϴ� ���� �Ȱ���
	double arr[5] = { 0 };
	int size = sizeof(arr) / sizeof(double);
	double* parr = arr;

	// �Է¹ݺ�
	printf("�Ǽ��� %d�� �Է� >> ", size);
	for (int i = 0; i < size;i+=1) {
		scanf_s("%lf", (parr + i));
	}

	// ��¹ݺ�
	printf("����� �� : ");
	for (int i = 0; i < size; i += 1) {
		printf("%.1lf ", arr[i]);
	} printf("\n");
	return 0;
}