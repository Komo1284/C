#include <stdio.h>

int main(void) {
	// 합/차 : 규칙성이 명확하게 존재한다.
	int result = 0;
	int num = 0;
	printf("합을 구할 정수 입력 >> ");
	scanf_s("%d", &num);
	// while은 중간과정에 대해서 신경을 쓰지 않는 경우가 많음
	// -> 1 ~ 10의 합은 10 ~ 1의 합과 같다.
	// +@ : 한정된 경우에 한해서 if 단독사용처럼 쓸 수 있다.
		while (num > 0) {
			result += num;
			num -= 1;
		}
		/*
		int value = 1;
		while (value <= num) {
			result += value;
			value += 1;
		}
		*/	
	printf("합 : %d\n", result);
	return 0;
}