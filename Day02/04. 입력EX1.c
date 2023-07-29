#include <stdio.h>

int main(void) {
	char name[100] = "";
	int age = 0;
	char hobby[100] = "";
	printf("이름을 입력하세요 >> ");
	scanf_s("%s", name, 100);
	printf("나이를 입력하세요 >> ");
	scanf_s("%d", &age);
	printf("취미를 입력하세요 >> ");
	scanf_s("%s", hobby, 100);

	printf("당신의 정보\n");
	printf("[%s] : [%d] / [%s]\n", name, age, hobby);
	return 0;
}