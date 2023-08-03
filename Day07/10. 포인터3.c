#include <stdio.h>

// 1. 단일변수에 대한 포인터변수 - return을 2개이상 하고 싶을 때
double calculate1(double avg, int value) {
	return avg + value;
}
// - 포인터는 매개변수로 준비되고, 값도 불러오고, 값의 저장도 가능하게 됨
void calculate2(double* pavg, int* pvalue) {
	*pavg += *pvalue;
	// return을 추가할 경우, 상태값을 return시킨다.
	// -> 코드의 정상작동여부를 확인하기 위한 값
	// -> 예시1) 0 : 정상동작, 0 이외 : 문제가 있음
	// -> 예시2) 1 : 성공, 0 : 실패
}

// 2. 배열에 대한 포인터변수 - 배열을 써야 할 때
// - 문자열은 배열이니 포인터로 받아온다.
int input_data(char* msg, int count) {
	int data = 0;
	printf(msg, count);
	scanf_s("%d", &data);
	return data;
}
// - 배열을 이용해야 할 때
void input_arr(int* parr, int size) {
	for (int i = 0; i < size; i += 1) {
		parr[i] = input_data("%d번째 값 >> ", i + 1);
	}
}
double make_avg(int* parr, int size) {
	double avg = 0;
	for (int i = 0; i < size; i += 1) {
		// avg = avg + parr[i];
		// avg = calculate1(avg, parr[i]);
		calculate2(&avg, &parr[i]);
	} return avg / size;
}

int main(void) {
	int arr[6] = { 0 };
	int size = sizeof(arr) / sizeof(int);
	double avg = 0;
	// 포인터변수는 다른 공간일 때 의미가 있다.
	// - 공유는 같은 공간 내에서 같이 쓰는 것이 아님
	input_arr(arr, size);
	avg = make_avg(arr, size);

	printf("평균 : %.2lf\n", avg);
	return 0;
}