#include <stdio.h>

int main(void) {
	char name[100] = "";
	int age = 0;
	char hobby[100] = "";
	printf("�̸��� �Է��ϼ��� >> ");
	scanf_s("%s", name, 100);
	printf("���̸� �Է��ϼ��� >> ");
	scanf_s("%d", &age);
	printf("��̸� �Է��ϼ��� >> ");
	scanf_s("%s", hobby, 100);

	printf("����� ����\n");
	printf("[%s] : [%d] / [%s]\n", name, age, hobby);
	return 0;
}