#include <stdio.h>

int main(void) {
	// 복합대입 : 산술연산과 연계하는 연산자
	int count = 100;
	int value = 10;
	printf("수량 : %d\n", count);

	// 대입연산자의 특성을 기본으로 한다.
	// - 왼쪽은 공간, 오른쪽은 값
	// - 우선순위가 최저
	count = count + value; // 오른쪽을 계산하고 나온 결과를 저장한다.
	printf("증가된 수량 : %d\n", count);

	// 추가하는 값을 우선연산하도록 설정하고...
	count = count * (value + 10);
	printf("증가된 수량 : %d\n", count);
	
	// 이를 줄여쓰는 것이 복합대입연산자
	count *= value + 10;
	printf("증가된 수량 : %d\n", count);

	// 주의사항 : 초기화는 못함
	// int num = num + 5; -> int num += 5;
	
	// 그래도 기억해놓고 싶다면...
	// 대입 : 갱신/교체
	// 복합대입 : 누적
	return 0;
}