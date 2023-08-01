#include <stdio.h>
// 기본형식의 함수 - 거의 사용하지 않음
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
// void : 자료형이 없음을 뜻하는 키워드이자 자료형
// - 함수에서만 허용됨
// 반환형 : 함수내부에서 필요한 것을 외부로 꺼냈을 때 식별하기 위한 정보
// -> 값을 외부로 복사시키기 위함
// ※ 보통 많은 경우, 함수명은 동사로 설정됨
int get_result(void) {
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	printf("두 정수 입력 >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	result = num1 + num2;
	return result;
}

int main(void) {
	// 반환형이 있는 함수의 호출 : 변수 = 함수명();
	int num1 = get_result();
	int num2 = get_result();
	printf("4개 정수의 합 : %d\n", num1 + num2);
	return 0;
}