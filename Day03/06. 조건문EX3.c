#include <stdio.h>

int main(void) {
	int value = 0;
	printf("���� �Է� >> ");
	scanf_s("%d", &value);
	if (value < 0) {
		value *= -1;
	}
	printf("���밪 : %d\n", value);
	return 0;
}