#include <stdio.h>

int main(void) {
	// 반복문 while
	// - 실행순서 : 조건식 -> 종속문 -> 조건식 ......
	// - 종료시점 : 조건식에서만 종료됨

	// 무한반복 : 반복횟수를 모른다. 하지만 확실하게 끝이 남.
	// - 접근방식은 조건문처럼 접근한다.
	// - if와 while의 가장 큰 차이는 한번/여러번
	
	// 초기화하는 값은 명확하게 필요한게 없을 때는..
	// "없다" 는 의미에서 0으로 넣는다.
	// 필요한게 있다면 필요한 값을 미리 넣어둔다.
	// while 무한반복에서는 명확하게 필요한 값이 분명하게 존재함.
	int num = -1;
	while (num < 0) {
		printf("0이상의 정수 입력 >> ");
		scanf_s("%d", &num);
	}
	printf("지지고 복고 하게 됩니다.\n");

	return 0;
}