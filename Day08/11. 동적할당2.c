#include <stdio.h>
#include <malloc.h>

int* getVariable(void) {
	char* tmp = (char*)malloc(sizeof(char));
	if (tmp != NULL) {
		*tmp = 'A';
	} return tmp;
}
void EX1(void) {
	// 동적할당은 변수를 특정 함수에 묶어놓지 않기 위함이다.
	// -> 함수에서 변수가 나오도록 만들 수 있게 됨.
	char* pch1 = getVariable();
	char* pch2 = getVariable();
	printf("%p %p\n", pch1, pch2);
	printf("%c %c\n", *pch1, *pch2);
	free(pch1);
	free(pch2);
}

void EX2(void) {
	// 배열의 주의사항 : 크기
	
	// - 선언한 배열은 내부에서 연산으로 크기를 구하여 사용함
	// double arr[3];
	// int size = sizeof(arr) / sizeof(double);
	
	// - 동적할당으로 생성한 배열은 크기를 지정하고 사용함
	int size = 3;
	double* parr = (double*)malloc(sizeof(double) * size);
	// - 이 후의 과정은 운용방식과 동일함
	if (parr != NULL) {
		// 주의사항
		// - 동적할당으로 생성한 변수는 항상 초기화를 해줘야 한다.
		for (int i = 0; i < size; i += 1) {
			parr[i] = 0;
		}
		// - 배열 쓰는 법대로 사용함
		printf("%d개의 값 >> ", size);
		for (int i = 0; i < size; i += 1) {
			scanf_s("%lf", &parr[i]);
		}
		printf("입력된 값\n");
		for (int i = 0; i < size; i += 1) {
			printf("%.1lf ", parr[i]);
		} printf("\n");
	}
	else printf("생성실패\n");
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