#include <stdio.h>

int main(void) {
	// 산술연산자 - 수치연산
	int storage = 100;
	int storage_exp = 0;

	// 사용방법1을 하게 되는 이유 : 변수를 늘리기 싫다.
	printf("5개 증가할 경우 : %d\n", storage + 5);
	printf("11개 감소할 경우 : %d\n", storage - 11);

	// 사용방법2를 하게 되는 이유 : 매번 연산하면 낭비다.
	// - 효율성/비교/분석/통계/원본복사 등 온갖 이유로 준비한다.
	storage_exp = storage - 15;
	printf("원래 수량 : %d, 15개 감소한 수량 : %d\n", storage, storage_exp);

	// 1) 몫연산은 소수점을 구하지 않는다.
	printf("몇배인가? %d\n", storage / storage_exp);
	printf("6명한테 나눠줄 경우 : %d\n", storage / 6);

	// 2) 나머지는 더이상 나눌 수 없는 수를 의미함
	printf("6명한테 나눠주면 남게될 수량 : %d\n", storage % 6); // storage - storage / 6;

	// 3) 실수값이 들어가면 무조건 실수값이 나온다.
	printf("결과1 : %.2lf\n", 10 * 2.5);
	printf("결과2 : %.2lf\n", 10 - 2.5);
	printf("결과3 : %d\n", 10 / 3);		// 몫은 정수끼리는 몫을 구하고
	printf("결과4 : %.2lf\n", 10 / 3.0);	// 실수가 있으면 나누기를 진행함
	return 0;
}