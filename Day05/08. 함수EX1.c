#include <stdio.h>

void calculator(void) {
	int num1 = 0;
	int num2 = 0;
	printf("Á¤¼ö 2°³ ÀÔ·Â >> ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("ÇÕ : %d\n", num1 + num2);
	printf("Â÷ : %d\n", num1 - num2);
	printf("°ö : %d\n", num1 * num2);
	if (num2 == 0) printf("¸ò : ¿¬»êºÒ°¡\n");
	else printf("¸ò : %d\n", num1 / num2);
}
int main(void) {
	calculator();
	return 0;
}