#include <stdio.h>

int main(void) {
	int num = 1;
	while (num % 10 != 0) {
		printf("10의 배수를 입력 >> ");
		scanf_s("%d", &num);
		if (num % 10 != 0) {
			printf("%d는 10의 배수가 아닙니다.\n", num);
		}
	}
	printf("\n입력을 받은 10의 배수 : %d\n", num);

	// 내부에 조건식이 필요한 경우, 그 조건식의 결과를 이용할 수 있다.
	// - 보조제어문 break
	// - 반복문의 조건식이 아닌, 내부의 조건식에서 끝날 수 있게 만들어줌
	// - 종속문이 실행되고 있을 때 끝남
	num = 1;
	// while의 조건식에 1을 넣었다
	// -> 무조건 작동한다.
	// -> 종속문 내부에서 종료가 반드시 되도록 맞춰줘야 함
	while (1) {
		printf("10의 배수를 입력 >> ");
		scanf_s("%d", &num);
		if (num % 10 != 0) {
			printf("%d는 10의 배수가 아닙니다.\n", num);
		}
		else {
			break;
		}
	}
	printf("\n입력을 받은 10의 배수 : %d\n", num);
	return 0;
}