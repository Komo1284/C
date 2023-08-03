#include <stdio.h>

int main(void) {
	// 변수의 형태가 달라지지지만
	// 그 외에 요구하는 것은 똑같음
	double arr[5] = { 0 };
	int size = sizeof(arr) / sizeof(double);
	double* parr = arr;

	// 입력반복
	printf("실수값 %d개 입력 >> ", size);
	for (int i = 0; i < size;i+=1) {
		scanf_s("%lf", (parr + i));
	}

	// 출력반복
	printf("저장된 값 : ");
	for (int i = 0; i < size; i += 1) {
		printf("%.1lf ", arr[i]);
	} printf("\n");
	return 0;
}