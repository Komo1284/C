#include <stdio.h>

int main(void) {
	// �߰����� : �ùٸ��� �����ߴٸ�, ������ �����ϴ� ���� �ٲ��� ��
	//           ��� �ݿ��Ǿ �ٲ�� �˴ϴ�.
	double dnum = 9984.456789;
	// ���� ������ �Ʒ��� �ּ�ó�� �������� ������ �����غ�����.
	printf("1 : %lf\n", dnum);
	printf("2 :  %.5lf\n", dnum);
	printf("3 :   %.4lf\n", dnum);
	printf("4 : %.3lf\n", dnum);
	printf("5 : %.2lf\n", dnum);
	printf("6 : %.1lf\n", dnum);
	printf("7 : -> %.0lf <-\n", dnum);
	return 0;
}