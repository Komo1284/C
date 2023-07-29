#include <stdio.h>

int main(void) {
	// 대입연산자 : 오른쪽(값)을 왼쪽(저장공간)에 복사하여 저장시켜주는 연산자
	int value = 0;
	int num = 100;
	double dnum = 3.99;
	
	// 다른 값으로 덮어쓰기하여 교체할 수 있음
	printf("%d\n", num);
	num = 110;
	printf("%d\n", num);
	
	// 다른 변수끼리도 값을 복사할 수 있음
	// - 변수가 아니라 저장된 것만 복사가 됨
	value = num;
	num = 120;
	printf("%d %d\n", value, num);

	// 자동형변환(문법/규칙/설정)으로 저장하는 변수에 맞춰버릴 수 있음
	// - 저장하는 변수에 맞춰서 값의 변형이 발생한다.
	// - 지원되는 범위 : char / int / double만 가능
	// - 문자열은 호환되지 않으니 주의
	value = dnum;	// 실수 -> 정수 = 소수점버림처리
	printf("%d %.2lf\n", value, dnum);
	dnum = num;		// 정수 -> 실수 = 없기 때문에 .0이 추가됨
	printf("%d %.2lf\n", num, dnum);
	return 0;
}