#include <stdio.h>

int main(void) {
	// 포인터 추가문제
	// 크기가 6인 정수배열에 값을 저장하고 그 값들의 평균을 구합니다.
	// 평균을 출력하고, 평균을 기준으로 입력된 값들과의 차이를 출력하세요.
	// - 배열은 포인터를 이용해주세요.
	int arr[6] = { 0 };
	int size = sizeof(arr) / sizeof(int);
	double avg = 0;
	int* parr = arr;
	/*
	// 논리 : 포인터와 배열변수는 서로 다른 변수
	// -> 값의 종류는 같음
	printf("%d %d\n", parr[1], arr[1]);
	// -> C언어에는 정해진 자료구조라는 것은 존재하지 않음
	// [] : 배열첨자연산자. A[B]의 조합일 경우 이를 *(A + B) 연산으로 작동함.
	printf("%d %d\n", 1[parr], 1[arr]);
	*/

	// 배열을 포인터로 쓸 때 실사용방식 : 변수명만 바꾸면 됨
	for (int i = 0; i < size; i += 1) {
		printf("%d번째 값 입력 >> ", i + 1);
		scanf_s("%d", &parr[i]);
	}
	// 단, 원리는 알고 있어야 함
	for (int i = 0; i < size; i += 1) {
		avg += *(parr + i);
	} avg /= size;

	printf("평균 : %.2lf\n", avg);
	for (int i = 0; i < size; i += 1) {
		printf("%d번 값의 크기차이 : %.2lf\n", i + 1, parr[i] - avg);
	}
	return 0;
}