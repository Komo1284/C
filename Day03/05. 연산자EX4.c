#include <stdio.h>

int main(void) {
	char ch1 = 0;
	char ch2 = 0;
	printf("첫번째 문자 입력 >> "); scanf_s(" %c", &ch1, 1);
	printf("두번째 문자 입력 >> "); scanf_s(" %c", &ch2, 1);
	// 주의사항
	// - 문자는 비교가 성립함
	// - 문자열은 절대로 비교가 성립하지 않음
	printf("\n일치여부 연산결과 : %d", ch1 == ch2);
	printf("\n불일치여부 연산결과 : %d\n", ch1 != ch2);
	return 0;
}