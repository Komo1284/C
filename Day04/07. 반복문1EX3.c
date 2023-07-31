#include <stdio.h>

int main(void) {
	// 크게
	// 원본 - 분해 - 통일 - 포장 과정

	// 원본
	/*
	printf("5 10 15 20 25 30 \n");
	*/
	// 분해
	/*
	printf("5 ");
	printf("10 ");
	printf("15 ");
	printf("20 ");
	printf("25 ");
	printf("30 ");
	printf("\n");
	*/
	// 통일
	/*
	int num = 5;
	printf("%d ", num);
	num += 5;
	printf("%d ", num);
	num += 5;
	printf("%d ", num);
	num += 5;
	printf("%d ", num);
	num += 5;
	printf("%d ", num);
	num += 5;
	printf("%d ", num);
	printf("\n");
	*/
	// 포장
	int num = 5;
	while (num <= 30) {
		printf("%d ", num);
		num += 5;
	} printf("\n");
	// 팁 : 반복횟수를 줄일려면, 규칙성을 잘 찾아야 한다.
	int num1 = 1;
	while (num1 <= 30) {
		if (num1 % 5 == 0) printf("%d ", num1);
		num1 += 1;
	} printf("\n");
	return 0;
}