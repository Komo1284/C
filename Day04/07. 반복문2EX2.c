#include <stdio.h>

int main(void) {
	int count = 0;
	printf("횟수 입력 >> ");
	scanf_s("%d", &count);
	if (count <= 0) {
		printf("출력할 내용이 없습니다.\n");
	}
	else {
		for (int a = 1; a <= count; a += 1) {
			printf("HELLO! ");
		} printf("\n");
		/*
		while (count > 0) {
			printf("HELLO! ");
			count -= 1;
		} printf("\n");
		*/
	}
	return 0;
}