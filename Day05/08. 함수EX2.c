#include <stdio.h>

// ���ǻ���1 : ��ȯ���� ������ int�� �ƴϰ� �ٲ��.
// - return ����� ���� ���� �������� ����� ��
//   ������ void, ������ ����� �ڷ������� ����
// ���ǻ���2 : return�� ������ ����� �� ����
// - return�� �Լ��� �����Ŵ. ������ �����, ù��° return�� �����.
//   ��, ���ǹ��� ���ؼ� ������ ����
// ���ǻ���3 : ��ȯ���� return�� �ݵ�� ��ġ���Ѿ� ��
// - return�� �ʿ��� ���� ��Ȯ�ϰ� �����ϱ� ���� ��ɾ�
int get_sum(void) {
	int result = 0;
	int limit = 0;
	printf("���� ���� ���� �Է� >> ");
	scanf_s("%d", &limit);
	for (int i = 1; i <= limit; i += 1) {
		result += i;
	}
	return result;
}

int main(void) {
	int result = get_sum();
	printf("��� : %d\n", result);
	return 0;
}