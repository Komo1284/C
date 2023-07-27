#include <stdio.h>

int main(void) {
	// 추가문제 : 올바르게 구성했다면, 변수에 저장하는 값을 바꿨을 때
	//           모두 반영되어서 바뀌게 됩니다.
	double dnum = 9984.456789;
	// 위의 변수를 아래의 주석처럼 나오도록 서식을 적용해보세요.
	printf("1 : %lf\n", dnum);
	printf("2 :  %.5lf\n", dnum);
	printf("3 :   %.4lf\n", dnum);
	printf("4 : %.3lf\n", dnum);
	printf("5 : %.2lf\n", dnum);
	printf("6 : %.1lf\n", dnum);
	printf("7 : -> %.0lf <-\n", dnum);
	return 0;
}