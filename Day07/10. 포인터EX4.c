#include <stdio.h>

int main(void) {
	// �����ڵ�
	/*
	char word[15] = "";
	int size = sizeof(word) / sizeof(char);
	printf("�ִ� %d������ �ܾ� �Է� >> ", size - 1);
	scanf_s("%s", word, size);
	printf("�Էµ� �ܾ� : %s\n", word);
	*/
	char word[15] = "";
	int size = sizeof(word) / sizeof(char);
	char* pword = word;
	// �����ϴ� ���� ����������
	// �ʿ��� ���� ���������� ���� �ҷ����� ����ó��
	// �翬�� ����� �� ����
	printf("�ִ� %d������ �ܾ� �Է� >> ", size - 1);
	scanf_s("%s", pword, size);
	printf("�Էµ� �ܾ� : %s\n", pword);
	return 0;
}