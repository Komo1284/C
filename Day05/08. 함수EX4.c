#include <stdio.h>

int change(int num) {
	if (num % 2 == 0) return num + 1;
	else return num - 1;
}

int main(void) {
	// 함수를 실행하면 반환이 있을 경우
	// 임의의 값을 불러올 수 있는 변수와 동일하다.
	// - 값이 필요한 곳에 바로 투입해서 사용할 수 있음
	printf("결과1 : %d\n", change(13));
	printf("결과2 : %d\n", change(16));
	printf("결과3 : %d\n", change(-16));
	printf("결과4 : %d\n", change(-13));
	return 0;
}