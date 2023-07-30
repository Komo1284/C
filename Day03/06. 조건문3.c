#include <stdio.h>

int main(void) {
	// 조건문의 응용 : 종속문으로 조건문을 추가하기
	// - 팁 : else쪽에만 추가하는게 좋음
	int num = 0;
	printf("입력 >> "); scanf_s("%d", &num);
	// - 조건문은 재배치가 가능하다.
	// - 재배치를 잘 하시면 중괄호를 생략할 수 있다.
	// - else if 라는 구조가 나타남

	// else if : 경우의 수를 걸러내기 위한 것
	// - 생략해서 나타나는 결과물이다.
	/*
	if (num >= 50)		printf("50이상\n");
	else if (num >= 40) printf("40이상\n");
	else if (num >= 30) printf("30이상\n");
	else if (num >= 20) printf("20이상\n");
	else if (num >= 10) printf("10이상\n");
	else				printf("10미만\n");
	*/

	// else if는 남발하면 코드가 더러워지니 주의
	int value = 0;
	if (num < 10) printf("10미만\n");
	else {
		if (num < 20) value = 10;
		else if (num < 30) value = 20;
		else if (num < 40) value = 30;
		else if (num < 50) value = 40;
		else value = 50;
		printf("%d이상\n", value);
	}
	
	return 0;
}