#include <stdio.h>

void EX(void) {
	// �迭�� �ݺ��� �� ����ϰ� �غ��� ��
	// - �迭�� ũ�Ⱑ ���̸�, �����ǵ��� ������ �Ѵ�.
	// - �迭�� ũ�⿡ ���缭 �ݺ�/������ �����Ǿ�� �Ѵ�.
	// - �迭�� �������� ��쿡�� ũ�⸦ �������� ����
	//   -> sizeof()�����ڸ� �̿���
	int arr[3] = { 0 };
	int size = sizeof(arr) / sizeof(int);	// �������� ����
	int result1 = 0;
	int result2 = 1;
	/*
	printf("%d\n", sizeof(size));	// ������ ũ�⸦ ���ϰų�
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int));	// �ڷ����� ũ�⸦ ���Ѵ�
	printf("%d\n", sizeof(double));
	*/
	printf("���� %d�� �Է� >> ", size);
	for (int i = 0; i < size; i += 1) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < size; i += 1) {
		result1 += arr[i];
	}
	for (int i = 0; i < size; i += 1) {
		result2 *= arr[i];
	}
	printf("�迭�� ����� ������ �� : %d\n", result1);
	printf("�迭�� ����� ������ �� : %d\n", result2);
	printf("�迭�� ����� ������ ��� : %.2lf\n", result1 / (double)size);
}

int main(void) {
	// EX();
	int arr[3] = { 0 };
	int result = 0;

	printf("���� 3�� �Է� >> ");
	scanf_s("%d", &arr[0]);
	scanf_s("%d", &arr[1]);
	scanf_s("%d", &arr[2]);

	result = arr[0] + arr[1] + arr[2];

	printf("�迭�� ����� ������ �� : %d\n", arr[0] + arr[1] + arr[2]);
	printf("�迭�� ����� ������ �� : %d\n", result);
	printf("�迭�� ����� ������ ��� : %.2lf\n", result / 3.0);
	return 0;
}