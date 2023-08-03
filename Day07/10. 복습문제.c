#include <stdio.h>

int input_data(void) {
	int data = 0;
	printf(">> "); scanf_s("%d", &data);
	if (data >= 0 && data <= 100) return data;
	else return -1;
}

int main(void) {
	// 함수복습문제
	// - 0부터 100사이의 정수값만 입력을 받아 반환하는 함수를
	//   정의하세요.
	// - 해당 범위를 벗어난 값을 입력했을 경우 -1이 나옵니다.

	// 포인터복습문제
	// - 위에서 정의한 함수와 준비된 포인터변수를 이용해 값을
	//   입력을 받고, 그 합을 출력하세요.
	// - 단, 둘 다 -1이 아닐 때만 합을 출력하고, 그 외에는
	//   <연산불가>라고 출력하세요.
	int num1 = 0;		int num2 = 0;
	int* pnum1 = &num1; int* pnum2 = &num2;
	printf("첫번째 정수를 입력하세요");
	*pnum1 = input_data();
	printf("두번째 정수를 입력하세요");
	*pnum2 = input_data();
	if (*pnum1 != -1 && *pnum2 != -1) {
		printf("결과 : %d\n", *pnum1 + *pnum2);
	}
	else {
		printf("연산불가\n");
	}
	return 0;
}