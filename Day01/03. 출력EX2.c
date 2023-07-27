#include <stdio.h>

int main(void) {
	// printf를 이용하면 출력이 된다.
	// - printf를 몇번 쓰면 좋을까?
	// ※ 효율성을 위한 규칙
	// 1) 한줄당 printf 한번
	// 2) 너무 짧으면 한줄로 합친다.(화면 절반)
	// 3) 합쳤을 때 보여주는 값의 수량이 5개까지만으로 조절한다.
	double dnum1 = 13.1;
	double dnum2 = 13.2;
	double dnum3 = 13.3;
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	printf("1 : %lf\n2 : %lf\n3 : %lf\n", dnum1, dnum2, dnum3);
	printf("%d, %d, %d\n", num1, num2, num3);
	return 0;
}