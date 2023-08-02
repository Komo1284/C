#include <stdio.h>

int main(void) {
	double arr[6] = { 0 };
	int size = sizeof(arr) / sizeof(double); // 대상 배열의 자료형으로 설정
	double result = 0;

	for (int i = 0; i < size; i += 1) {
		printf("%d번 값 >> ", 1 + i);
		scanf_s("%lf", &arr[i]);
	}

	for (int i = 0; i < size; i += 1) {
		result += arr[i];
	}

	printf("입력된 값 : ");
	for (int i = 0; i < size; i += 1) {
		printf("%.1lf", arr[i]);
		if (i == size - 1) printf("\n");
		else printf(", ");
	} printf("값들의 합 : %.1lf\n", result);

	return 0;
}