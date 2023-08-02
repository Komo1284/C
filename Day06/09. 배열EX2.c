#include <stdio.h>

void EX(void) {
	// 배열을 반복할 때 고려하고 준비할 것
	// - 배열의 크기가 몇이며, 연동되도록 만들어야 한다.
	// - 배열의 크기에 맞춰서 반복/연산이 연동되어야 한다.
	// - 배열을 선언했을 경우에는 크기를 연산으로 구함
	//   -> sizeof()연산자를 이용함
	int arr[3] = { 0 };
	int size = sizeof(arr) / sizeof(int);	// 연산으로 연동
	int result1 = 0;
	int result2 = 1;
	/*
	printf("%d\n", sizeof(size));	// 변수의 크기를 구하거나
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int));	// 자료형의 크기를 구한다
	printf("%d\n", sizeof(double));
	*/
	printf("정수 %d개 입력 >> ", size);
	for (int i = 0; i < size; i += 1) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < size; i += 1) {
		result1 += arr[i];
	}
	for (int i = 0; i < size; i += 1) {
		result2 *= arr[i];
	}
	printf("배열에 저장된 값들의 합 : %d\n", result1);
	printf("배열에 저장된 값들의 곱 : %d\n", result2);
	printf("배열에 저장된 값들의 평균 : %.2lf\n", result1 / (double)size);
}

int main(void) {
	// EX();
	int arr[3] = { 0 };
	int result = 0;

	printf("정수 3개 입력 >> ");
	scanf_s("%d", &arr[0]);
	scanf_s("%d", &arr[1]);
	scanf_s("%d", &arr[2]);

	result = arr[0] + arr[1] + arr[2];

	printf("배열에 저장된 값들의 합 : %d\n", arr[0] + arr[1] + arr[2]);
	printf("배열에 저장된 값들의 곱 : %d\n", result);
	printf("배열에 저장된 값들의 평균 : %.2lf\n", result / 3.0);
	return 0;
}