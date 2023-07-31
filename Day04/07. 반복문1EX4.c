#include <stdio.h>

int main(void) {
	int num = 0;	// 약수를 구할 정수를 입력하여 저장하는 변수
	int value = 1;	// 약수 겸 약수반복통제용 변수
	
	// 1부터 10까지만 필요하고, 그 외에는 용납하지 않는 무한반복
	// - 횟수제한 없음
	while (num < 1 || num > 10) {
		printf("1부터 10까지의 정수 입력 >> ");
		scanf_s("%d", &num);
	}

	printf("%d의 약수목록\n", num);
	// 약수를 구하여 출력하는 반복
	// - 1부터 입력한 정수까지만 진행함
	while (value <= num) {
		// 당연히 알고 있는 것을 요구하면 안됨
		// - 무조건 먼저 체크해봐야 함
		if (num % value == 0) {
			printf("%d ", value);
		}
		value += 1;
	} printf("\n");
	return 0;
}