#include <stdio.h>

int main(void) {
	int num = 0;
	printf("���� �Է� >> ");
	scanf_s("%d", &num);
	// if (num == (num / 10) * 10) {
	// if (num - (num / 10) * 10 == 0) {
	if (num % 10 == 0) { // ����Ǵ��� �������������� �Ѵ�.
		printf("������ ����� �� : %d\n", num + 5);
	}
	else {
		printf("������ ����� �� : %d\n", num);
	}
	return 0;
}