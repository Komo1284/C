#include <stdio.h>

int main(void) {
	int value = 0;
	printf("정수 입력 >> ");
	scanf_s("%d", &value);
	if (value < 0) {
		value *= -1;
	}
	printf("절대값 : %d\n", value);
	return 0;
}