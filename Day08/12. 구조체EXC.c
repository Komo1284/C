#include <stdio.h>
#include <malloc.h>

struct node {
	double num1;
	double num2;
};
// typedef 가 없으면 풀네임으로 적으면 됨
int main(void) {
	// 실습
	// - 구조체변수 하나를 동적할당으로 생성하고
	struct node* pnode = (struct node*)malloc(sizeof(struct node));
	
	// - 생성되었는지 체크한 다음
	//   생성되었을 경우 초기화하고 입력을 받아 합을 출력하세요.
	if (pnode == NULL) printf("동적할당 실패\n");
	else {
		pnode->num1 = 0;
		pnode->num2 = 0;
		printf("실수 2개 입력 >> ");
		scanf_s("%lf", &pnode->num1);
		scanf_s("%lf", &pnode->num2);
		printf("합 : %.2lf\n", pnode->num1 + pnode->num2);
	}
	
	// - 마지막에는 생성한 변수를 제거하세요.
	if (pnode != NULL) {
		free(pnode);
		pnode = NULL;
	}
	return 0;
}