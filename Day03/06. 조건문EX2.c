#include <stdio.h>

int main(void) {
	double dnum1 = 0;
	double dnum2 = 0;
	printf("실수 2개 입력 >> ");
	scanf_s("%lf", &dnum1);
	scanf_s("%lf", &dnum2);
	// if들을 사용할 때 주의사항
	// - 경우의 수는 필요한 것이 아니라면 중첩되지 말아야 함
	// - 그 외의 경우는 경우의 수의 쓰레기통으로 쓰는 것이 else이다.
	if (dnum1 > dnum2) {
		printf("%.2lf가 %.2lf보다 더 큽니다.\n", dnum1, dnum2);
	}
	else {
		printf("%.2lf가 %.2lf보다 더 크거나 같습니다.\n", dnum2, dnum1);
	}
	return 0;
}