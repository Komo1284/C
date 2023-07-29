#include <stdio.h>

int main(void) {
	int num = 0;
	double dnum = 0;
	printf("정수 입력 >> ");
	scanf_s("%d", &num);
	printf("실수 입력 >> ");
	scanf_s("%lf", &dnum);
	// 연산결과는 연산식과 그 출력이 올바르면 무조건 나온다.
	// - 값의 종류에 따라서 어떤 종류의 결과가 나오는지 신경써야 함
	printf("\n<%d>의 3승 : <%d>", num, num * num * num);
	printf("\n<%.2lf>의 2승 : <%.2lf>", dnum, dnum * dnum);
	printf("\n<%d> / <%.2lf> : <%.2lf>", num, dnum, num / dnum);
	printf("\n<%d> x <%.2lf> : <%.2lf>\n", num, dnum, num * dnum);
	return 0;
}