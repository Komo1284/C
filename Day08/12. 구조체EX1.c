#include <stdio.h>

// node : 자료구조에서 값을 저장하고 있는 것의 단위
// - 보통 붙일 이름이 마땅치 않으면 많이 사용함
struct node {
	int num1;
	int num2;
};

int main(void) {
	// 구조체변수명도 마땅한게 없으면
	// 구조체별칭 + 숫자 조합으로 많이 함
	struct node node1 = { 15, 30 };
	printf("구조체변수에 저장된 값 : %d, %d\n",
		node1.num1, node1.num2);
	return 0;
}