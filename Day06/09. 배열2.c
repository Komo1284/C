#include <stdio.h>

void EX1(void) {
	// 저장하려는 문자의 수량 + 1만큼 공간을 만들어야 함
	// -> 마지막 끝 지점에는 정수 0이 저장되어야 한다.
	char word1[5] = "Apple";
	char word2[6] = "Apple"; // 5 + 1만큼 있어야 올바르게 저장됨
	printf("%s\n", word2);
	printf("%d\n", word2[5]);

	// 한글은 공간을 2개씩 소모함. 2배로 계산해야 함.
	char word3[2] = "한";
	char word4[3] = "한"; // 2 + 1만큼의 변수가 필요함
	printf("%s\n", word4);
	printf("%d\n", word4[2]);
}

void EX2(void) {
	char word[11];
	printf("배열의 주소 : %p\n", word);
	// 정수/실수 배열은 주소값이 쓸모없음
	// 문자배열은 주소값을 항상 요구하고...
	// 그렇게 받아온 주소값을 이용해 "하나"를 저장하고 불러온다.
	// &를 붙이지 않음
	printf("최대 10글자 >> ");
	scanf_s("%s", word, 11); // 저장공간의 크기를 넣어줌
	printf("출력 : %s\n", word);
}

void EX3(void) {
	// ※ 변수는 절대로 복사되지 않는다 - 변수가 가지고 있는 값만 복사된다.
	// -> 정확하게 같은 크기를 준비해서 복사를 해줘야 한다.
	// -> 1대1로 정확하게 인덱스를 매칭시켜줘야 한다.
	char word1[6] = "Apple";
	int size1 = sizeof(word1) / sizeof(char);
	char word2[6];
	int size2 = sizeof(word2) / sizeof(char);
	// 이 통제를 조건문으로 수행한다.
	if (size1 == size2) {
		for (int i = 0; i < 6; i += 1) {
			word2[i] = word1[i];
		}
		printf("%s %s\n", word2, word1);
	}
	else printf("복사 불가\n");
}

int main(void) {
	// 문자열 : 문자자료형 배열
	
	// - 자료구조이다보니, 구조를 이용하는 규칙이 존재함
	/*EX1();*/
	
	// - 저장/출력/불러오기만 할 때는 값 "한개" 처럼 사용됨
	/*EX2();*/
	
	// - 그 외의 모든 과정은 배열로써 동작함
	/*EX3();*/
	return 0;
}