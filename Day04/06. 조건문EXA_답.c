#include <stdio.h>

int main(void) {
	double score = 0;
	double result = 0;
	printf("1�� ���� >> "); scanf_s("%lf", &score);
	// �� : else������ �������� �����Ͻô°� ����
	if (score < 0 || score > 100) {
		printf("1�� ������ �߸��Ǿ����ϴ�. �ٽ� ó������ �ϼ���.\n");
	}
	else {
		result += score;
		printf("2�� ���� >> "); scanf_s("%lf", &score);
		if (score < 0 || score > 100) {
			printf("2�� ������ �߸��Ǿ����ϴ�. �ٽ� ó������ �ϼ���.\n");
		}
		else {
			result += score;
			result /= 2;
			printf("��� : %.1lf��", result);
			if (result >= 90) printf("(��)\n");
			else if (result >= 80) printf("(��)\n");
			else printf("(��)\n");
		}
	}
	return 0;
}