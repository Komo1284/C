#include <stdio.h>

int main(void) {
	// 산술연산은 값의 종류에 따라 결과가 달라지는 경우가 많음
	// - 변수의 자료형은 나중에 연산되는 것도 고려해야 하지만..
	//   전부 고려할 수 없다.
	int count1 = 0;
	int count2 = 0;
	double result = 0;
	printf("음료수의 수량 >> ");
	scanf_s("%d", &count1);
	printf("사람의 수량 >> ");
	scanf_s("%d", &count2);
	
	result = (double)count1 / (double)count2;

	printf("인당 수량 : %d개\n", (int)result);
	printf("남는 수량 : %d개\n", count1 % count2);
	// 자료형으로 인해 제한이 생길 때 잠시 바꿔쓰기 위한 연산자를 사용한다.
	// -> 형변환 연산자
	// -> (자료형)대상변수
	printf("비율 : %.2lf개\n", result);
	return 0;
}