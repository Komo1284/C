#include <stdio.h>
#include "header.h"

int main(void) {
	// 헤더파일
	// - 기본형식 외의 자주 사용하는 함수를 넣어두기 위한 소스파일
	// - 사용되는 것들만 결과물에 포함되어서 만들어짐
	// -> 필요한 기능들을 모아두는 도구함처럼 사용됨

	// ※ C언어에서는 만들어진 것을 거의 제공하지 않음
	// - 필요한게 있다면 직접 만들어 써야 함
	// - 입력을 편하게 만들어주는 함수가 대표적인 예시

	// 1. 문자를 입력을 받아 반환하는 입력함수를 정의하세요.
	//    함수명은 inputc 입니다.
	//    아래의 코드가 작동해야 합니다.
	char ch1 = 0;
	char ch2 = 0;
	printf("문자 2개 입력 >> ");
	ch1 = inputc();
	ch2 = inputc();
	printf("결과 : ->%c<-, ->%c<-\n", ch1, ch2);

	// 2. 실수, 정수를 입력을 받아 반환하는 입력함수들을 정의하세요.
	//    실수 입력함수의 이름은 inputf 이고
	//    정수 입력함수의 이름은 inputi 입니다.
	//    아래 코드가 작동해야 합니다.
	int value1 = 0;
	double value2 = 0;
	printf("정수, 실수 입력 >> ");
	value1 = inputi();
	value2 = inputf();
	printf("두 값의 합 : %.2lf\n", value1 + value2);
	return 0;
}