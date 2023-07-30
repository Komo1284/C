#include <stdio.h>

int main(void) {
	// 복습문제

	// 1) 실수값을 하나 입력받아 저장하기 위한 변수를 선언하세요.
	//    0으로 초기화하고, 소수점 2자리까지 출력합니다.
	double dnum = 0;
	printf("최초값 : %.2lf\n", dnum);
	
	// 2) 준비된 변수에 실수값을 하나 입력을 받아 저장하세요.
	//    저장된 값은 다시 소수점 2자리까지 출력합니다.
	printf("실수값을 하나 입력해주세요 >> ");
	scanf_s("%lf", &dnum);
	printf("입력된 값 : %.2lf\n", dnum);
	
	// 3) 저장된 실수값의 정수부(3.55일 경우 3)와 실수부(3.55일 경우 0.55)를
	//    각각 따로 분리하여 출력하세요.
	//    정수부는 소수점이 없고, 실수부는 소수점은 2자리까지 출력합니다.
	printf("정수부 : %d\n", (int)dnum);
	printf("실수부 : %.2lf\n", dnum - (int)dnum);

	// 4) 위에서 구한 정수부와 실수부의 곱셈결과를 구하여 출력하세요.
	//    소수점은 2자리까지입니다.
	printf("결과 : %.2lf\n", (int)dnum * (dnum - (int)dnum));

	
	// 하나의 연속되는 코드로 구성하면...
	// 변수 선언 -> 입력 -> 연산 -> 출력
	int value1 = 0;
	double value2 = 0;
	
	printf("최초값 : %.2lf\n실수값을 하나 입력해주세요 >> ", value2);
	scanf_s("%lf", &value2);
	printf("입력된 값 : %.2lf\n", value2);
	
	value1 = dnum;
	value2 -= value1;
	
	printf("정수부 : %d\n", value1);
	printf("실수부 : %.2lf\n", value2);
	printf("결과 : %.2lf\n", value1 * value2);
	return 0;
}