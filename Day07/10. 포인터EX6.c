#include <stdio.h>

// �����Ͱ� ���� �Լ����� Ư¡
// - ��ü ������ �߷����� �����̴�.
// - ���α׷��� ��ü ���� �� �Ϻθ� ������.
// - �����ϸ� �ڵ尡 ��������.
void show_arr(double* parr, int size) {
	printf("�迭�� ����� %d���� ��\n", size);
	for (int i = 0; i < size; i += 1) {
		printf("%.1lf ", parr[i]);
	} printf("\n");
}

int main(void) {
	double arr[6] = { 0 };
	int size = sizeof(arr) / sizeof(double);
	for (int i = 0; i < size; i += 1) {
		arr[i] = 1.1 * (i + 1);
	}
	show_arr(arr, size);
	
	return 0;
}