#include <stdio.h>

int main(void) {
	int num = 100;
	double dnum = 3.14;
	// ������ �ʿ��� ���� �ݿ��Ͽ�
	// ������ �ǵ��� �������� �Ѵ�.
	printf("%d + %.2lf = %.2lf\n", num, dnum, num + dnum);
	printf("%d - %.2lf = %.2lf\n", num, dnum, num - dnum);
	printf("%d * %.2lf = %d\n", num, dnum, (int)(num * dnum));
	printf("%d / %.2lf = %.2lf\n", num, dnum, num / dnum);
	return 0;
}