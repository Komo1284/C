#include <stdio.h>

int main(void) {
	int num = 100;
	double dnum = 3.14;
	// 변수는 필요한 곳에 반영하여
	// 연동이 되도록 만들어줘야 한다.
	printf("%d + %.2lf = %.2lf\n", num, dnum, num + dnum);
	printf("%d - %.2lf = %.2lf\n", num, dnum, num - dnum);
	printf("%d * %.2lf = %d\n", num, dnum, (int)(num * dnum));
	printf("%d / %.2lf = %.2lf\n", num, dnum, num / dnum);
	return 0;
}