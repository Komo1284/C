#include <stdio.h>

int main(void) {
	int count = 0;
	printf("Ƚ�� �Է� >> ");
	scanf_s("%d", &count);
	if (count <= 0) {
		printf("����� ������ �����ϴ�.\n");
	}
	else {
		for (int a = 1; a <= count; a += 1) {
			printf("HELLO! ");
		} printf("\n");
		/*
		while (count > 0) {
			printf("HELLO! ");
			count -= 1;
		} printf("\n");
		*/
	}
	return 0;
}