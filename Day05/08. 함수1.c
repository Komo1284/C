#include <stdio.h>
// 기본형식의 함수 - 거의 사용하지 않음
// - 프로그램 내부에 서로 다른 별개의 프로그램이 있을 때
//   이를 분리하여 관리하기 위한 것
// - 프로그램 그 자체를 반복시킬 필요가 있을 때
//   이를 좀 더 편하게 관리하기 위한 것

// ※ 기본형식은 보통 함수명이 명사로 붙는다.
// 함수의 특징 - 변수를 공유하지 않는다.
// - 변수가 생성되는 공간자체가 분리가 됨
// - 저장된 코드를 실행해야 하기 때문에 메모리사용량을 절약할 수 있음
// - 함수 실행전에는 함수의 변수에 간섭할 수 없음
// - 함수 실행후에는 함수의 변수에 간섭할 수 없음
// - ☆ 함수가 실행중일 때는 호출된 곳에서 간섭할 수 없음
//     오로지 다시 한번 내부에서 함수가 호출되어야 간섭이 가능
void program(void) {
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	printf("두 정수 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	result = num1 + num2;

	printf("결과 : %d\n", result);
}

int main(void) {
	//  함수 : 코드를 저장하는 변수
	int menu = 0;
	while (1) {
		printf("실행(1) / 종료(2) >> "); scanf_s("%d", &menu);
		if (menu == 1) program();
		else if (menu == 2) {
			printf("종료합니다.\n");
			break;
		}
		else printf("잘못된 입력입니다.\n");
	}
	return 0;
}