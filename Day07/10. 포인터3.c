#include <stdio.h>

// 1. ���Ϻ����� ���� �����ͺ��� - return�� 2���̻� �ϰ� ���� ��
double calculate1(double avg, int value) {
	return avg + value;
}
// - �����ʹ� �Ű������� �غ�ǰ�, ���� �ҷ�����, ���� ���嵵 �����ϰ� ��
void calculate2(double* pavg, int* pvalue) {
	*pavg += *pvalue;
	// return�� �߰��� ���, ���°��� return��Ų��.
	// -> �ڵ��� �����۵����θ� Ȯ���ϱ� ���� ��
	// -> ����1) 0 : ������, 0 �̿� : ������ ����
	// -> ����2) 1 : ����, 0 : ����
}

// 2. �迭�� ���� �����ͺ��� - �迭�� ��� �� ��
// - ���ڿ��� �迭�̴� �����ͷ� �޾ƿ´�.
int input_data(char* msg, int count) {
	int data = 0;
	printf(msg, count);
	scanf_s("%d", &data);
	return data;
}
// - �迭�� �̿��ؾ� �� ��
void input_arr(int* parr, int size) {
	for (int i = 0; i < size; i += 1) {
		parr[i] = input_data("%d��° �� >> ", i + 1);
	}
}
double make_avg(int* parr, int size) {
	double avg = 0;
	for (int i = 0; i < size; i += 1) {
		// avg = avg + parr[i];
		// avg = calculate1(avg, parr[i]);
		calculate2(&avg, &parr[i]);
	} return avg / size;
}

int main(void) {
	int arr[6] = { 0 };
	int size = sizeof(arr) / sizeof(int);
	double avg = 0;
	// �����ͺ����� �ٸ� ������ �� �ǹ̰� �ִ�.
	// - ������ ���� ���� ������ ���� ���� ���� �ƴ�
	input_arr(arr, size);
	avg = make_avg(arr, size);

	printf("��� : %.2lf\n", avg);
	return 0;
}