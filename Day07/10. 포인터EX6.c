#include <stdio.h>

// 포인터가 사용된 함수들의 특징
// - 전체 절차가 잘려나간 모양새이다.
// - 프로그램의 전체 절차 중 일부를 포장함.
// - 남발하면 코드가 복잡해짐.
void show_arr(double* parr, int size) {
	printf("배열에 저장된 %d개의 값\n", size);
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