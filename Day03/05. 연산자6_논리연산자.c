#include <stdio.h>

int main(void) {
	double display = 6.8;
	int ram = 8;

	// ���ǻ��� : ���迬���ڴ� ���ӻ���ϸ� �ȵ�
	// -> ������ ���׿����̴�.
	printf("���1 : %d\n", 6 <= display < 7);
	printf("���2 : %d\n", 7 > display >= 6);

	// ���ÿ� �����ϴ� ���� üũ�� �� ������ �̿��Ѵ�
	printf("���3 : %d\n", 6 <= display && display < 7);
	printf("���4 : %d\n", 7 > display && display >= 6);

	// ���� �ٸ� ������ �ϳ� �̻� �����ϴ� ���� ã�� �� ������ ����
	printf("���5 : %d\n", ram == 8 || ram == 12);

	// ���������ڴ� ���׿������̴�. ������ ��Ȱ���� �� �����.
	int result = 5 <= display && display < 6;
	printf("���6 : %d, %d\n", result, !result);
	return 0;
}