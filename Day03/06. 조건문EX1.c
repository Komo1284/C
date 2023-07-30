#include <stdio.h>

int main(void) {
	int num = 0;
	printf("정수 입력 >> ");
	scanf_s("%d", &num);
	// if (num == (num / 10) * 10) {
	// if (num - (num / 10) * 10 == 0) {
	if (num % 10 == 0) { // 배수판단은 나머지연산으로 한다.
		printf("변수에 저장된 값 : %d\n", num + 5);
	}
	else {
		printf("변수에 저장된 값 : %d\n", num);
	}
	return 0;
}