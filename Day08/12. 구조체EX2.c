#include <stdio.h>

struct node {
	int num1;
	int num2;
};

int main(void) {
	struct node node1 = { 0, 0 };
	printf("저장할 정수 2개 입력 >> ");
	scanf_s("%d", &node1.num1);
	scanf_s("%d", &node1.num2);
	printf("두 변수의 합 : %d\n", node1.num1 + node1.num2);
	printf("두 변수의 곱 : %d\n", node1.num1 * node1.num2);
	return 0;
}