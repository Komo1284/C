#include <stdio.h>
#include <malloc.h>

void REVIEW1(void) {
	// �����Ҵ� : ������ �ǽð����� ����/�����ϱ�
	// - �ʿ��� ��ŭ ����� ���� ���� �� ����
	// -> ���� - ��� - ���� ������ ����
	int* pnum = (int*)malloc(sizeof(int));
	*pnum = 0;
	printf("�Է� > "); scanf_s("%d", pnum);
	printf("��� : %d\n", *pnum);
	free(pnum);
}
void REVIEW2(void) {
	// �����Ҵ�� ���ǻ��� : ������ �����Ǿ����� Ȯ���ؾ� ��
	// - �����ϸ� ���� ������ �ȵ�
	// -> ���ǹ��� �̿��� �ɷ����� ��
	int* pnum = (int*)malloc(sizeof(int));
	if (pnum != NULL) {
		*pnum = 0;
		printf("�Է� > "); scanf_s("%d", pnum);
		printf("��� : %d\n", *pnum);
	}
	else printf("����\n");
	if (pnum != NULL) {
		free(pnum);
		pnum = NULL;
	}
}

int main(void) {
	double* dnum1 = (double*)malloc(sizeof(double));
	double* dnum2 = (double*)malloc(sizeof(double));
	if (dnum1 != NULL && dnum2 != NULL) {
		*dnum1 = 0;
		*dnum2 = 0;
		printf("�Ǽ��� 2�� �Է� >> ");
		scanf_s("%lf", dnum1);
		scanf_s("%lf", dnum2);
		printf("����� �� : %.1lf, %.1lf\n", *dnum1, *dnum2);
		printf("�� ���� �� : %.2lf\n", *dnum1 + *dnum2);
	}
	else printf("�����Ҵ� ����\n");
	if (dnum1 != NULL) {
		free(dnum1);
		dnum1 = NULL;
	}
	if (dnum2 != NULL) {
		free(dnum2);
		dnum2 = NULL;
	}
	return 0;
}