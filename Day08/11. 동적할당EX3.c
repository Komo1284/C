#include <stdio.h>
#include <malloc.h>

void EX(void) {
	// 동적할당은 크기를 실시간으로 받아서 처리할 수 있음
	// - 필요한 만큼의 공간만 만들어서 이용할 수 있음
	int size = 0;
	char* pword = NULL;
	printf("크기 입력 >> ");
	scanf_s("%d", &size);
	pword = (char*)malloc(sizeof(char) * size);
	if (pword != NULL) {
		printf("문자열 입력 >> ");
		scanf_s("%s", pword, size);
		printf("\n단어 : %s\n", pword);
	}
	else printf("실패\n");
	if (pword != NULL) {
		free(pword);
		pword = NULL;
	}
}

int main(void) {
	int size = 15;
	char* pword = (char*)malloc(sizeof(char)*size);
	if (pword != NULL) {
		printf("문자열 입력 >> ");
		scanf_s("%s", pword, size);
		printf("\n단어 : %s\n", pword);
	}
	else printf("실패\n");
	if (pword != NULL) {
		free(pword);
		pword = NULL;
	}
	return 0;
}