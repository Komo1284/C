#include <stdio.h>

int main(void) {
	int ram1 = 8;
	int ram2 = 12;
	int ram3 = 16;
	int search_data = 0;

	printf("ã�� �ִ� ���� ũ���? >> ");
	scanf_s("%d", &search_data);

	printf("���1 : %d\n", ram1 == search_data); // �� ����� �ݴ�� ����ġ( != )
	printf("���2 : %d\n", ram2 == search_data);
	printf("���3 : %d\n", ram3 == search_data);
	// �̻� <-> �̸�, ���� <-> �ʰ�
	printf("��1 : %d, %d\n", ram2 > search_data, ram2 >= search_data);
	printf("��2 : %d, %d\n", ram3 < search_data, ram3 <= search_data);

	return 0;
}