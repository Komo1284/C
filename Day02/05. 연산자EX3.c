#include <stdio.h>

int main(void) {
	// 변수는 최초에 준비할 때는 필요한 자료의 수만큼 준비한다.
	// 필요한 것들은 나중에 추가하면 됨
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int result = 0;
	printf("정수 3개 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	// 변수에는 결과만 저장됨. 연산식은 저장할 수 없음
	result = num1 + num2 + num3;

	// 상수라면 직접 실수값을 준비하면 된다.
	printf("입력된 값들의 합 : %d\n", result);
	printf("입력된 값들의 평균 : %.2lf\n", result / 3.0);
	return 0;
}