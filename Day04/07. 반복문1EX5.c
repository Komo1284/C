#include <stdio.h>

int main(void) {
	// ��/�� : ��Ģ���� ��Ȯ�ϰ� �����Ѵ�.
	int result = 0;
	int num = 0;
	printf("���� ���� ���� �Է� >> ");
	scanf_s("%d", &num);
	// while�� �߰������� ���ؼ� �Ű��� ���� �ʴ� ��찡 ����
	// -> 1 ~ 10�� ���� 10 ~ 1�� �հ� ����.
	// +@ : ������ ��쿡 ���ؼ� if �ܵ����ó�� �� �� �ִ�.
		while (num > 0) {
			result += num;
			num -= 1;
		}
		/*
		int value = 1;
		while (value <= num) {
			result += value;
			value += 1;
		}
		*/	
	printf("�� : %d\n", result);
	return 0;
}