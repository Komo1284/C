#include <stdio.h>

int main(void) {
	int num = 0;
	// �Է� / ó�� / ����� �Բ� ������ �ȵ�
	// ���ѹݺ�/���ѹݺ��� ���ǽ��� �ٸ�
	// ������ �ȵ�
	while (1) {
		printf("0�� ������ ���� �Է� >> ");
		scanf_s("%d", &num);
		if (num == 0) printf("���Է��ϼ���\n");
		else break;
	}

	printf("%d�� ������\n", num);
	if (num < 0) num *= -1;
	// for�� ��κ��� ���, �ݺ��� �ʿ��� ����
	// ���� �غ��ϰų�...
	// �����ϰų�...
	// �̿븸 �Ѵ�.
	// -> �ݺ��� �����ϴµ� �ʿ��� ������ �����Ǵ� Ư���� ������.
	for (int a = num; a <= 20; a += num) {
		printf("%d ", a);
	} printf("\n");
	
	return 0;
}