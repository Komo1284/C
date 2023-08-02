#include <stdio.h>

int main(void) {
	int num1 = 0;
	int num2 = 0;
	
	// 같이 할 경우에도, & 빼먹으면 안됨
	int* pnum1 = &num1;
	int* pnum2 = &num2;

	// 변수만 대체함.
	printf("정수 2개 입력 >> ");
	scanf_s("%d", &*pnum1);
	// 예외 : 애초에 포인터변수가 존재해서 주소값을 요구하는 경우
	// - *를 안붙이고 쓰는 경우도 있음
	scanf_s("%d", pnum2);
	// 주의 : 포인터 변수에 바로 &붙이면 큰일남

	printf("합연산 : %d\n", *pnum1 + *pnum2);
	printf("두 정수의 평균 : %.2lf\n", (*pnum1 + *pnum2)/2.0);
	return 0;
}