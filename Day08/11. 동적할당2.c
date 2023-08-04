#include <stdio.h>
#include <malloc.h>

int* getVariable(void) {
	char* tmp = (char*)malloc(sizeof(char));
	if (tmp != NULL) {
		*tmp = 'A';
	} return tmp;
}
void EX1(void) {
	// �����Ҵ��� ������ Ư�� �Լ��� ������� �ʱ� �����̴�.
	// -> �Լ����� ������ �������� ���� �� �ְ� ��.
	char* pch1 = getVariable();
	char* pch2 = getVariable();
	printf("%p %p\n", pch1, pch2);
	printf("%c %c\n", *pch1, *pch2);
	free(pch1);
	free(pch2);
}

void EX2(void) {
	// �迭�� ���ǻ��� : ũ��
	
	// - ������ �迭�� ���ο��� �������� ũ�⸦ ���Ͽ� �����
	// double arr[3];
	// int size = sizeof(arr) / sizeof(double);
	
	// - �����Ҵ����� ������ �迭�� ũ�⸦ �����ϰ� �����
	int size = 3;
	double* parr = (double*)malloc(sizeof(double) * size);
	// - �� ���� ������ ����İ� ������
	if (parr != NULL) {
		// ���ǻ���
		// - �����Ҵ����� ������ ������ �׻� �ʱ�ȭ�� ����� �Ѵ�.
		for (int i = 0; i < size; i += 1) {
			parr[i] = 0;
		}
		// - �迭 ���� ����� �����
		printf("%d���� �� >> ", size);
		for (int i = 0; i < size; i += 1) {
			scanf_s("%lf", &parr[i]);
		}
		printf("�Էµ� ��\n");
		for (int i = 0; i < size; i += 1) {
			printf("%.1lf ", parr[i]);
		} printf("\n");
	}
	else printf("��������\n");
	if (parr != NULL) {
		free(parr);
		parr = NULL;
	}
}

int main(void) {
	EX1();
	EX2();
	return 0;
}