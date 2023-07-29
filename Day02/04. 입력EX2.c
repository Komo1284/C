#include <stdio.h>

int main(void) {
	// C언어에서는 사용할 변수가 있으면 반드시 먼저 선언해줘야 함
	int num1 = 0; int num2 = 0; int num3 = 0;
	double dnum1 = 0; double dnum2 = 0; double dnum3 = 0;
	// 그 후에는 필요한 변수 이용해서 절차를 구성해준다.

	// 필요한 입력은 먼저 전부 다 받아줘야 함
	printf("정수 3개를 입력하세요 >> ");
	scanf_s("%d", &num1);	// 입력할 때 정수형태만 가능
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	
	printf("실수 3개를 입력하세요 >> ");
	scanf_s("%lf", &dnum1);	// 정수 및 실수형태도 가능
	scanf_s("%lf", &dnum2);
	scanf_s("%lf", &dnum3);
	// 필요한 것이 확보되었으면 연산하고....

	// 그 결과를 본다.
	printf("\n저장된 정수\n");
	printf("->%d<->%d<->%d<-\n", num1, num2, num3);
	printf("저장된 실수 : %.2lf, %.2lf, %.2lf\n", dnum1, dnum2, dnum3);
	return 0;
}