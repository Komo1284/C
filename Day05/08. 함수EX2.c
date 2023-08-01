#include <stdio.h>

// 주의사항1 : 반환형은 무조건 int가 아니고 바뀐다.
// - return 대상을 보고 가장 마지막에 맞춰야 함
//   없으면 void, 있으면 대상의 자료형으로 맞춤
// 주의사항2 : return은 여러번 사용할 수 없음
// - return은 함수를 종료시킴. 여러번 써봤자, 첫번째 return에 종료됨.
//   단, 조건문에 의해서 선택은 가능
// 주의사항3 : 반환형과 return은 반드시 일치시켜야 함
// - return은 필요한 값을 정확하게 복사하기 위한 명령어
int get_sum(void) {
	int result = 0;
	int limit = 0;
	printf("합을 구할 정수 입력 >> ");
	scanf_s("%d", &limit);
	for (int i = 1; i <= limit; i += 1) {
		result += i;
	}
	return result;
}

int main(void) {
	int result = get_sum();
	printf("결과 : %d\n", result);
	return 0;
}