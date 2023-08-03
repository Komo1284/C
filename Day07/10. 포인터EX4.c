#include <stdio.h>

int main(void) {
	// 원본코드
	/*
	char word[15] = "";
	int size = sizeof(word) / sizeof(char);
	printf("최대 %d글자의 단어 입력 >> ", size - 1);
	scanf_s("%s", word, size);
	printf("입력된 단어 : %s\n", word);
	*/
	char word[15] = "";
	int size = sizeof(word) / sizeof(char);
	char* pword = word;
	// 공유하는 것이 목적이지만
	// 필요한 값을 저장했으니 값을 불러오는 변수처럼
	// 당연히 사용할 수 있음
	printf("최대 %d글자의 단어 입력 >> ", size - 1);
	scanf_s("%s", pword, size);
	printf("입력된 단어 : %s\n", pword);
	return 0;
}