#include <stdio.h>

int main(void) {
	int num = 0;
	// 입력 / 처리 / 출력은 함께 섞으면 안됨
	// 무한반복/유한반복은 조건식이 다름
	// 섞으면 안됨
	while (1) {
		printf("0을 제외한 정수 입력 >> ");
		scanf_s("%d", &num);
		if (num == 0) printf("재입력하세요\n");
		else break;
	}

	printf("%d의 배수목록\n", num);
	if (num < 0) num *= -1;
	// for는 대부분의 경우, 반복에 필요한 값을
	// 따로 준비하거나...
	// 복사하거나...
	// 이용만 한다.
	// -> 반복을 통제하는데 필요한 변수는 온존되는 특성을 가진다.
	for (int a = num; a <= 20; a += num) {
		printf("%d ", a);
	} printf("\n");
	
	return 0;
}