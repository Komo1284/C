#include <stdio.h>

struct node {
	int num1;
	int num2;
};

int main(void) {
	struct node node1 = { 33333, 66666 };
	struct node node2 = { 0, 0 };
	struct node node3 = { 0, 0 };
	struct node node4 = { 0, 0 };
	// 실습
	// 1) node1의 모든 멤버변수의 값을 node2로 복사하세요.
	node2 = node1;
	// 2) node1의 num1만 node3의 같은 멤버변수에 복사하세요.
	node3.num1 = node1.num1;
	// 3) node1의 num2만 node4의 같은 멤버변수에 복사하세요.
	node4.num2 = node1.num2;
	// 4) 각 구조체변수에 저장된 값을 출력하세요.
	printf("%d %d\n", node1.num1, node1.num2);
	printf("%d %d\n", node2.num1, node2.num2);
	printf("%d %d\n", node3.num1, node3.num2);
	printf("%d %d\n", node4.num1, node4.num2);
	return 0;
}