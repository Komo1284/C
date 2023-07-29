#include <stdio.h> // 전처리문 include : 입력/출력함수가 들어있음

// main 함수 : 절차를 시작하기 위한 공간. 프로그램에 반드시 하나만 존재해야 함.
int main(void) {
	// 절차를 구성한다.
	// 자료 - 변수를 준비해야 하고...
	// 1) 미리 준비해두는 것은 상수로...
	// 2) 수집해야 하는 것은 입력함수로...
	char ch = 'A';
	char word1[100] = "SLOW";
	char word2[100] = "FAST";
	// 처리 - 연산자에 의해서 진행

	// 정보 - 결과를 보여주는 것
	// -> 출력에 의해서 정보가 만들어진다.
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