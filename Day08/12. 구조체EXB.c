#include <stdio.h>

struct node {
	int num1;
	int num2;
};

// 함수로 만들어 쓴다.
void input_data(struct node* pnode) {
	printf("정수 2개 입력 >> ");
	scanf_s("%d", &pnode->num1);
	scanf_s("%d", &pnode->num2);
}
void show_data(struct node* pnode) {
	printf("평균 : %.2lf\n", (pnode->num1 + pnode->num2) / 2.0);
}
int main(void) {
	// 실습
	struct node node1 = { 0,0 };
	// 포인터변수를 선언하고, 선언된 구조체변수를 공유합니다.
	/*
	struct node* pnode = &node1;
	*/
	// 포인터 변수를 이용하여 정수값 2개를 입력을 받아 출력하고
	/*
	printf("정수 2개 입력 >> ");
	scanf_s("%d", &pnode->num1);
	scanf_s("%d", &pnode->num2);
	*/
	input_data(&node1);
	// 포인터 변수를 이용하여 값들의 평균을 구하여 출력하세요.
	/*
	printf("평균 : %.2lf\n", (pnode->num1 + pnode->num2) / 2.0);
	*/
	show_data(&node1);
	return 0;
}