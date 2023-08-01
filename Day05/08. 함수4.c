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
void show_result(int num1, int num2) {
	printf("결과 : %d\n", num1 + num2);
}
// 둘 다 있는 함수
// - make, create 같은 표현이 붙는다.
// - 연산 외에는 하지 않는다.
// - 주의사항 : 단순 연산은 만들지 않는다.
//             오히려 낭비이니 주의
int make_result(int num1, int num2) {
	return num1 + num2;
}
int main(void) {
	// 둘 다 있는 함수의 호출 : 변수 = 함수명(값1, 값2, 값3, ....);
	// - 입력과 출력을 모두 함수 외부에 의존하는 방식
	int num1 = 0;
	int num2 = 0;
	int value1 = 0;
	int value2 = 0;
	printf("2개 입력 >> ");
	scanf_s("%d", &num1); scanf_s("%d", &num2);
	value1 = make_result(num1 * num2, num1 + num2);
	value2 = make_result(num1 - num2, num1 * num2);
	printf("((%d) + (%d)) + ((%d) + (%d)) = %d\n",
		num1 * num2, num1 + num2, num1 - num2, num1 * num2, value1 + value2);
	return 0;
}