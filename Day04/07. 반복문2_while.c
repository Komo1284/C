#include <stdio.h>

int main(void) {
	// ���ѹݺ� : �ݺ�Ƚ���� ������ �� ����
	// - �ľ��� �ϱ� ���� ������ �����ؾ� ��

	int num = 0;		// �ŵ������� ���ҷ��� ���� ������ ����
	int count = 0;		// �ŵ����� Ƚ��
	int times = 3;		// �Է�Ƚ�� �����
	int result = 0;		// �ŵ����� ��� �����
	int count_time = 0;	// �ŵ����� ���� �����
	int value = 1;		// ��� ���ϱ� �� ����� ���ϴ� �ݺ� �����
	printf("�ŵ������� �� ���� >> "); scanf_s("%d", &num);

	// �Է�
	// 1) ������ Ƚ����ŭ�� �Է��� �޴´�.
	// 2) ������ Ƚ�������� �����ϴ� ���� Ȯ���Ѵ�.
	// -> �� �ٸ� ��ȭ�� ������ ���Ƿ� ���Ͽ� �����Ѵ�.
	while (times >= 1) {
		printf("1�̻��� �ŵ�����Ƚ���� �Է� >> "); // 3
		scanf_s("%d", &count);
		if (count > 0) break;
		else printf("�߸��Ǿ����ϴ�.\n");
		times -= 1;
	}
	if (times == 0) printf("ó������ �����ϼ���.\n");
	else {
		// ó��
		result = 1;
		count_time = 1;
		while (count_time <= count) {
			result *= num;
			count_time += 1;
		}
		printf("%d�� %d �ŵ����� : %d\n", num, count, result);
		// ���
		printf("������ : ");
		while (value <= result) {
			if (result % value == 0) {
				printf("%d ", value);
			}
			value += 1;
		} printf("\n");
	}
	
	return 0;
}