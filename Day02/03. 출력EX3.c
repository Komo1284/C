#include <stdio.h> // ��ó���� include : �Է�/����Լ��� �������

// main �Լ� : ������ �����ϱ� ���� ����. ���α׷��� �ݵ�� �ϳ��� �����ؾ� ��.
int main(void) {
	// ������ �����Ѵ�.
	// �ڷ� - ������ �غ��ؾ� �ϰ�...
	// 1) �̸� �غ��صδ� ���� �����...
	// 2) �����ؾ� �ϴ� ���� �Է��Լ���...
	char ch = 'A';
	char word1[100] = "SLOW";
	char word2[100] = "FAST";
	// ó�� - �����ڿ� ���ؼ� ����

	// ���� - ����� �����ִ� ��
	// -> ��¿� ���ؼ� ������ ���������.
	printf("\"%s BR%cWN F%cX\"\n", word1, ch, ch);
	printf("\'JUMP %cVER\'\n", ch);
	printf("\"THE\" \'%s\' \"D%cG\"\n", word2, ch);
	/*
	printf("\"QUICK BROWN FOX\"\n");
	printf("\'JUMP OVER\'\n");
	printf("\"THE\" \'LAZY\' \"DOG\"\n");
	*/
	return 0;
}