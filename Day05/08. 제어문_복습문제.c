#include <stdio.h>

int main(void) {
	double score1 = 0;
	double score2 = 0;
	double score3 = 0;
	double avg = 0;
	char rank = 0;
	// �������� : ���� 3���� �Է��� �޾� ����� ���ϰ� ����� ����ϼ���.
	// - ������ 1���̻� 200�����Ͽ��� �ϰ�, �� �ܿ��� ���Է��� �޽��ϴ�.
	// - ����� 150 �̻��� A, 150�̸� �� 100�̻��� B, 100�̸� �� 50�̻��� C
	//   �� �ܿ��� F�Դϴ�.
	// - ����� �Ҽ��� 3�ڸ����� �������� ���߼���.
	// - �������� ���� �ȵǴ� �κ��� �����Ͻð�, �̻��� �������� ���ؼ����� ������.

	// �ϳ��� ���� ���
	/*
	while (1) {
		printf("1�� ������ �Է��ϼ��� >> ");
		scanf_s("%lf", &score1);
		if (score1 >= 1 && score1 <= 200) break;
		else printf("1�̻� 200���Ͽ��� �մϴ�.\n");
	}
	while (1) {
		printf("2�� ������ �Է��ϼ��� >> ");
		scanf_s("%lf", &score2);
		if (score2 >= 1 && score2 <= 200) break;
		else printf("1�̻� 200���Ͽ��� �մϴ�.\n");
	}
	while (1) {
		printf("3�� ������ �Է��ϼ��� >> ");
		scanf_s("%lf", &score3);
		if (score3 >= 1 && score3 <= 200) break;
		else printf("1�̻� 200���Ͽ��� �մϴ�.\n");
	}
	*/

	// ���� �Էº��� �ް� ���� ���
	printf("���� 3���� �Է����ּ��� >> ");
	scanf_s("%lf", &score1); scanf_s("%lf", &score2); scanf_s("%lf", &score3);
	while (score1 < 1 || score1 > 200) {
		printf("��, 1�� ������ �̻��ؿ�.\n���Է� >> ");
		scanf_s("%lf", &score1);
	}
	while (score2 < 1 || score2 > 200) {
		printf("��, 2�� ������ �̻��ؿ�.\n���Է� >> ");
		scanf_s("%lf", &score2);
	}
	while (score3 < 1 || score3 > 200) {
		printf("��, 3�� ������ �̻��ؿ�.\n���Է� >> ");
		scanf_s("%lf", &score3);
	}
	avg = (score1 + score2 + score3) / 3;
	if (avg >= 150) rank = 'A';
	else if (avg >= 100) rank = 'B';
	else if (avg >= 50) rank = 'C';
	else rank = 'F';
	printf("��� : %.3lf��(%c)\n", avg, rank);

	return 0;
}