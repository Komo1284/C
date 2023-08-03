#include <stdio.h>

void init2var(int* pnum, double* pfnum) {
	*pnum = 10;
	*pfnum = 3.14;
}

int main(void) {
	// 실행코드 - 건드리지 말 것
	int num = 0;
	double fnum = 0;

	init2var(&num, &fnum);

	printf("%d, %.2lf\n", num, fnum);
	return 0;
}