#include <stdio.h>
#include <malloc.h>

void EX(void) {
	// �����Ҵ��� ������ �� �ִ�.
	// - ��ǻ�� �޸� ���� / OS�� ����
	// - �����ϸ� ������ �ּҰ� / �����ϸ� NULL( 0 )�� ����
	// - �� ���ÿ��� ���ǹ����� ����� ���� ��Ƽ� �����ؾ� ��
	
	// 1) ��������
	int* pnum1 = (int*)malloc(sizeof(int));
	int* pnum2 = (int*)malloc(sizeof(int));
	// 2) ������ ������ �ִ����� ����
	if (pnum1 != NULL && pnum2 != NULL) {
		// ������ ���ϴ� ���� ����
		*pnum1 = 10;
		*pnum2 = 20;
		printf("������ ����� �� : %d, %d\n", *pnum1, *pnum2);
	}
	else {
		// ������ �������� �ʰ� ��� ���
		printf("1�� �̻��� ������ �����Ҵ翡 �����߽��ϴ�.\n");
	}
	// 3) ������ �����Ǿ��� ��쿡�� ����
	if (pnum1 != NULL) {
		free(pnum1);	// �Ҵ�� ������ HEAP���κ��� ����
		pnum1 = NULL;	// ������ ������ ����� �ּҰ� ����
	}
	if (pnum2 != NULL) {
		free(pnum2);
		pnum2 = NULL;
	}

	
}

int main(void) {
	
	int* pnum1 = (int*)malloc(sizeof(int));
	int* pnum2 = (int*)malloc(sizeof(int));

	*pnum1 = 10;
	*pnum2 = 20;
	printf("������ ����� �� : %d, %d\n", *pnum1, *pnum2);
	
	free(pnum1);
	free(pnum2);
	
	return 0;
}