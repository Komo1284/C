#include <stdio.h>
#include <malloc.h>

void EX(void) {
	// �����Ҵ��� ũ�⸦ �ǽð����� �޾Ƽ� ó���� �� ����
	// - �ʿ��� ��ŭ�� ������ ���� �̿��� �� ����
	int size = 0;
	char* pword = NULL;
	printf("ũ�� �Է� >> ");
	scanf_s("%d", &size);
	pword = (char*)malloc(sizeof(char) * size);
	if (pword != NULL) {
		printf("���ڿ� �Է� >> ");
		scanf_s("%s", pword, size);
		printf("\n�ܾ� : %s\n", pword);
	}
	else printf("����\n");
	if (pword != NULL) {
		free(pword);
		pword = NULL;
	}
}

int main(void) {
	int size = 15;
	char* pword = (char*)malloc(sizeof(char)*size);
	if (pword != NULL) {
		printf("���ڿ� �Է� >> ");
		scanf_s("%s", pword, size);
		printf("\n�ܾ� : %s\n", pword);
	}
	else printf("����\n");
	if (pword != NULL) {
		free(pword);
		pword = NULL;
	}
	return 0;
}