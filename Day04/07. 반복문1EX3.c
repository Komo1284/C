#include <stdio.h>

int main(void) {
	// ũ��
	// ���� - ���� - ���� - ���� ����

	// ����
	/*
	printf("5 10 15 20 25 30 \n");
	*/
	// ����
	/*
	printf("5 ");
	printf("10 ");
	printf("15 ");
	printf("20 ");
	printf("25 ");
	printf("30 ");
	printf("\n");
	*/
	// ����
	/*
	int num = 5;
	printf("%d ", num);
	num += 5;
	printf("%d ", num);
	num += 5;
	printf("%d ", num);
	num += 5;
	printf("%d ", num);
	num += 5;
	printf("%d ", num);
	num += 5;
	printf("%d ", num);
	printf("\n");
	*/
	// ����
	int num = 5;
	while (num <= 30) {
		printf("%d ", num);
		num += 5;
	} printf("\n");
	// �� : �ݺ�Ƚ���� ���Ϸ���, ��Ģ���� �� ã�ƾ� �Ѵ�.
	int num1 = 1;
	while (num1 <= 30) {
		if (num1 % 5 == 0) printf("%d ", num1);
		num1 += 1;
	} printf("\n");
	return 0;
}