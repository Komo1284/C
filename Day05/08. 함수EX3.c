#include <stdio.h>

void show_bigger(int num1, int num2) {
	if (num1 > num2) {
		printf("���� ū �� : %d\n", num1);
	}
	else if (num2 > num1) {
		printf("���� ū �� : %d\n", num2);
	}
	else {
		printf("���� ���� �� : %d\n", num1);
	}
}

int main(void) {
	show_bigger(15, 4);
	show_bigger(4, 15);
	show_bigger(4, 4);
	return 0;
}