#include <stdio.h>
#include <malloc.h>

void program(double* parr, int size) {
	double avg = 0;
	for (int i = 0; i < size; i += 1) {
		parr[i] = 0;
	}
	printf("%d개 실수 입력 >> ", size);
	for (int i = 0; i < size; i += 1) {
		scanf_s("%lf", &parr[i]);
	}
	for (int i = 0; i < size; i += 1) {
		avg += parr[i];
	} avg /= size;
	printf("\n저장된 값 :");
	for (int i = 0; i < size; i += 1) {
		printf(" %.1lf", parr[i]);
	} printf("\n평균 : %.2lf\n", avg);
}
// 포인터 변수도 공유할 수 있음
// - *이 한 개 더 늘어남.
// - 이중포인터변수(다중포인터변수)
void deleteThis(void** parr) {
	// 함수로 처리할려면 포인터변수를 공유해야 함
	if (*parr != NULL) {
		free(*parr);
		*parr = NULL;
	}
	// 팁
	// void - 함수반환형에만 설정가능한 자료형
	// void* - 용도가 정해지지 않은 주소값을 다루는 포인터변수
	// void** - 위의 단일포인터변수를 공유하기 위한 이중포인터변수
}

int main(void) {
	// 1) 우리가 실행시킬 함수 program을 정의하세요.
	// - 실수배열과 그 크기를 전달받아 이용합니다.
	// - 전달된 배열 정보를 이용해 값을 입력을 합니다.
	// - 저장된 값들을 모두 출력합니다.
	// - 저장된 값들을 이용해 평균을 구하여 출력합니다.

	// 2) 이를 실행하기 위한 동적할당코드를 구성하세요.
	int size = 6;
	double* parr = (double*)malloc(sizeof(double) * size);
	
	if (parr == NULL) printf("동적할당실패\n");
	else program(parr, size);
	
	deleteThis(&parr);
	return 0;
}