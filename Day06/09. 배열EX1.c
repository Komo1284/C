#include <stdio.h>

int main(void) {
	// 배열의 선언 & 초기화
	int arr1[2] = { 10, 20 }; // 초기화 목록(initializer list)

	// 배열의 선언 & 초기화시 특징 : 모자르게 넣으면 무조건 0으로 초기화함
	// - 0을 넣는 경우에 한해선, 굳이 다 적을 필요없음
	// - 변수 초기화과정이 조금 더 편해짐
	double arr2[2] = { 0 };
	arr2[0] = 2.8;
	arr2[1] = 5.6;
	// ※ C언어에서 -1번 인덱스는 존재하지 않음
	//   인덱스는 무조건 0이상의 0과 양수이니 주의
	printf("정수배열 : %d, %d\n", arr1[0], arr1[1]);
	printf("실수배열 : %.1lf, %.1lf\n", arr2[0], arr2[1]);
	printf("정수배열에 있는 값들의 합 : %d\n", arr1[0] + arr1[1]);
	printf("실수배열에 있는 값들의 곱 : %.2lf\n", arr2[0] * arr2[1]);
	return 0;
}