#include <stdio.h>
// 기본형식의 함수 - 거의 사용하지 않음
void program(void) {
	int num1 = 0; int num2 = 0;
	printf("두 정수 입력 >> ");
	scanf_s("%d", &num1); scanf_s("%d", &num2);
	printf("결과 : %d\n", num1 + num2);
}
// 반환형이 있는 함수
int get_result(void) {
	int num1 = 0; int num2 = 0;
	printf("두 정수 입력 >> ");
	scanf_s("%d", &num1); scanf_s("%d", &num2);
	return num1 + num2;
}
// 매개변수가 있는 함수
// ※ 많은 경우에 show, print 등이 붙는다.
// PARAMETER(매개변수) : 호출될 때 넣어준 값으로 초기화시킬 변수
// - 해당 함수 내부에서 선언되고 사용되는 변수
void show_result(int num1, int num2) {
	printf("결과 : %d\n", num1 + num2);
}

int main(void) {
	// 기본함수의 호출 : 함수명();
	// program();

	// 반환형이 있는 함수의 호출 : 변수 = 함수명();
	// int num1 = get_result();
	// int num2 = get_result();
	// printf("4개 정수의 합 : %d\n", num1 + num2);

	// 매개변수가 있는 함수의 호출 : 함수명(값1, 값2, ...);
	int num1 = 100;
	int num2 = 5;
	show_result(num2, num1);
	return 0;
}