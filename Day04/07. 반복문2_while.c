#include <stdio.h>

int main(void) {
	// 유한반복 : 반복횟수를 예측할 수 있음
	// - 파악을 하기 위한 과정을 진행해야 함

	int num = 0;		// 거듭제곱을 구할려는 값을 저장한 변수
	int count = 0;		// 거듭제곱 횟수
	int times = 3;		// 입력횟수 제어용
	int result = 0;		// 거듭제곱 결과 저장용
	int count_time = 0;	// 거듭제곱 연산 제어용
	int value = 1;		// 약수 구하기 겸 약수를 구하는 반복 제어용
	printf("거듭제곱을 할 정수 >> "); scanf_s("%d", &num);

	// 입력
	// 1) 정해진 횟수만큼만 입력을 받는다.
	// 2) 정해진 횟수내에서 목적하는 값을 확보한다.
	// -> 별 다른 변화가 없으면 임의로 정하여 설정한다.
	while (times >= 1) {
		printf("1이상의 거듭제곱횟수를 입력 >> "); // 3
		scanf_s("%d", &count);
		if (count > 0) break;
		else printf("잘못되었습니다.\n");
		times -= 1;
	}
	if (times == 0) printf("처음부터 시작하세요.\n");
	else {
		// 처리
		result = 1;
		count_time = 1;
		while (count_time <= count) {
			result *= num;
			count_time += 1;
		}
		printf("%d의 %d 거듭제곱 : %d\n", num, count, result);
		// 출력
		printf("약수목록 : ");
		while (value <= result) {
			if (result % value == 0) {
				printf("%d ", value);
			}
			value += 1;
		} printf("\n");
	}
	
	return 0;
}