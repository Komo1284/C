#include <stdio.h>

// �߰�����
// ����5) ������ �ϳ��� �Է¹޾� ��ȯ�ϴ� �Է��Լ� input_data�� �����ϼ���.
int input_data(void) {
	int data = 0;
	scanf_s("%d", &data);
	return data;
}

// ����1) �Ʒ� �ڵ带 �⺻������ �Լ��� �����ϼ���.
//       �Լ����� fuction�Դϴ�.
void function(void) {
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	printf("1 >> "); num1 = input_data();
	printf("2 >> "); num2 = input_data();
	while (num1 <= num2) {
		result += num1;
		num1 += 1;
	}
	printf("R : %d\n", result);
}

// ����2) ����1���� ���� function���� ������ ���� return��Ű��
//       get_value �Լ��� �����ϼ���.
int get_value(void) {
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	printf("1 >> "); num1 = input_data();
	printf("2 >> "); num2 = input_data();
	while (num1 <= num2) {
		result += num1;
		num1 += 1;
	}
	return result;
}

// ����3) ����1���� ���� function���� ������ ���� �Ű������� �ٲ㼭
//       show_value �Լ��� �����ϼ���.
void show_value(int num1, int num2) {
	int result = 0;
	while (num1 <= num2) {
		result += num1;
		num1 += 1;
	}
	printf("R : %d\n", result);
}

// ����4) ����1���� ���� function���� ����2�� ����3���� ������ ����
//       ��� �����Ͽ� calculate �Լ��� �����ϼ���.
int calculate(int num1, int num2) {
	int result = 0;
	while (num1 <= num2) {
		result += num1;
		num1 += 1;
	}
	return result;
}

int main(void) {
	// main�Լ��� �ڵ�(�Լ�, ���α׷�)�� ������ ����Ѵ�.
	/*1�� �����ڵ�*/
	function();
	/*2�� �����ڵ�*/
	int result = get_value();
	printf("3�� ���� ��� : %d\n", result * 3);
	/*3�� �����ڵ�*/
	int n1 = 10; int n2 = 100;
	show_value(n1, n2);
	/*4�� �����ڵ�*/
	int n3 = 10; int n4 = 100;
	printf("%d���� %d������ �� : %d\n", n3, n4, calculate(n3, n4));
	return 0;
}

//int main(void) {
//	int num1 = 0;
//	int num2 = 0;
//	int result = 0;
//	printf("1 >> "); scanf_s("%d", &num1);
//	printf("2 >> "); scanf_s("%d", &num2);
//	while (num1 <= num2) {
//		result += num1;
//		num1 += 1;
//	}
//	printf("R : %d\n", result);
//	return 0;
//}