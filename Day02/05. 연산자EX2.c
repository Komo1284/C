#include <stdio.h>

int main(void) {
	int num = 0;
	double dnum = 0;
	printf("���� �Է� >> ");
	scanf_s("%d", &num);
	printf("�Ǽ� �Է� >> ");
	scanf_s("%lf", &dnum);
	// �������� ����İ� �� ����� �ùٸ��� ������ ���´�.
	// - ���� ������ ���� � ������ ����� �������� �Ű��� ��
	printf("\n<%d>�� 3�� : <%d>", num, num * num * num);
	printf("\n<%.2lf>�� 2�� : <%.2lf>", dnum, dnum * dnum);
	printf("\n<%d> / <%.2lf> : <%.2lf>", num, dnum, num / dnum);
	printf("\n<%d> x <%.2lf> : <%.2lf>\n", num, dnum, num * dnum);
	return 0;
}