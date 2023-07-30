#include <stdio.h>

int main(void) {
	int n1 = 0;
	int n2 = 0;
	printf("정수 2개 입력 >> ");
	scanf_s("%d", &n1);
	scanf_s("%d", &n2);
	// 나누기 계열은 0으로 죽었다 깨어나도 나눌 수 없음
	// -> 0을 걸러내는 조건문을 구성하세요.
	if (n2 == 0) {
		printf("결과 : 연산불가\n");
	}
	else {
		if (n1 % n2 == 0) {
			printf("결과 : %d\n", n1 / n2);
		}
		else {
			printf("결과 : %.1lf\n", n1 / (double)n2);
		}
	}
	return 0;
}