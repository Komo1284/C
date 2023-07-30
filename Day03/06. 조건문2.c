#include <stdio.h>

int main(void) {
	int num = 0;
	printf("정수 입력 >> ");
	scanf_s("%d", &num);
	// 조건문을 구성할 때 주의할 점 - 같은 내용은 뺀다.

	// if 단독사용 - else가 생략된 형태
	// -> 변화를 주고 싶을 때, 더(more) 뭔가를 하고 싶을 때
	// -> 추가내용 출력, 추가연산 실행...
	
	if (num % 10 == 0) {
		num = num + 5;
	}
	printf("변수에 저장된 값 : %d\n", num);
	return 0;
}