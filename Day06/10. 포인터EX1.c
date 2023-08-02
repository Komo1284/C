#include <stdio.h>

int main(void) {
	int num1 = 10;
	int num2 = 15;
	// 포인터 변수가 먼저 준비되지 않는다. 공유용이다.
	// - 대상변수의 정보를 자료형으로 준비하는 것
	int* pnum1;
	int* pnum2; // 변수 사용시 실수 예방을 위해 p를 붙여 구분

	// &만 깜빡하지 않으면 됨
	pnum1 = &num1;
	pnum2 = &num2;

	// *만 깜빡하지 않으면 됨
	printf("합연산 : %d\n", *pnum1 + *pnum2);
	printf("차연산 : %d\n", *pnum1 - *pnum2);
	printf("곱연산 : %d\n", *pnum1 * *pnum2);
	printf("나누기 : %.2lf\n", *pnum1 / (double)*pnum2);
	return 0;
}