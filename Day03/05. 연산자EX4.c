#include <stdio.h>

int main(void) {
	char ch1 = 0;
	char ch2 = 0;
	printf("ù��° ���� �Է� >> "); scanf_s(" %c", &ch1, 1);
	printf("�ι�° ���� �Է� >> "); scanf_s(" %c", &ch2, 1);
	// ���ǻ���
	// - ���ڴ� �񱳰� ������
	// - ���ڿ��� ����� �񱳰� �������� ����
	printf("\n��ġ���� ������ : %d", ch1 == ch2);
	printf("\n����ġ���� ������ : %d\n", ch1 != ch2);
	return 0;
}