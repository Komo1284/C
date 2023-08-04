#include <stdio.h>
#include <malloc.h>

struct node {
	double num1;
	double num2;
};
// typedef �� ������ Ǯ�������� ������ ��
int main(void) {
	// �ǽ�
	// - ����ü���� �ϳ��� �����Ҵ����� �����ϰ�
	struct node* pnode = (struct node*)malloc(sizeof(struct node));
	
	// - �����Ǿ����� üũ�� ����
	//   �����Ǿ��� ��� �ʱ�ȭ�ϰ� �Է��� �޾� ���� ����ϼ���.
	if (pnode == NULL) printf("�����Ҵ� ����\n");
	else {
		pnode->num1 = 0;
		pnode->num2 = 0;
		printf("�Ǽ� 2�� �Է� >> ");
		scanf_s("%lf", &pnode->num1);
		scanf_s("%lf", &pnode->num2);
		printf("�� : %.2lf\n", pnode->num1 + pnode->num2);
	}
	
	// - ���������� ������ ������ �����ϼ���.
	if (pnode != NULL) {
		free(pnode);
		pnode = NULL;
	}
	return 0;
}