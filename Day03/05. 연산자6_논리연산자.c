#include <stdio.h>

int main(void) {
	double display = 6.8;
	int ram = 8;

	// 주의사항 : 관계연산자는 연속사용하면 안됨
	// -> 무조건 이항연산이다.
	printf("결과1 : %d\n", 6 <= display < 7);
	printf("결과2 : %d\n", 7 > display >= 6);

	// 동시에 만족하는 것을 체크할 때 논리곱을 이용한다
	printf("결과3 : %d\n", 6 <= display && display < 7);
	printf("결과4 : %d\n", 7 > display && display >= 6);

	// 서로 다른 조건을 하나 이상 만족하는 것을 찾을 때 논리합을 쓴다
	printf("결과5 : %d\n", ram == 8 || ram == 12);

	// 부정연산자는 단항연산자이다. 조건을 재활용할 때 사용함.
	int result = 5 <= display && display < 6;
	printf("결과6 : %d, %d\n", result, !result);
	return 0;
}