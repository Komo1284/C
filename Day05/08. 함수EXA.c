#include <stdio.h>

// 추가문제
// 문제5) 정수값 하나를 입력받아 반환하는 입력함수 input_data를 정의하세요.
int input_data(void) {
	int data = 0;
	scanf_s("%d", &data);
	return data;
}

// 문제1) 아래 코드를 기본형식의 함수로 정의하세요.
//       함수명은 fuction입니다.
void function(void) {
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	printf("1 >> "); num1 = input_data();
	printf("2 >> "); num2 = input_data();
	while (num1 <= num2) {
		result += num1;
		num1 += 1;
	}
	printf("R : %d\n", result);
}

// 문제2) 문제1에서 만든 function에서 적절한 것을 return시키는
//       get_value 함수를 정의하세요.
int get_value(void) {
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	printf("1 >> "); num1 = input_data();
	printf("2 >> "); num2 = input_data();
	while (num1 <= num2) {
		result += num1;
		num1 += 1;
	}
	return result;
}

// 문제3) 문제1에서 만든 function에서 적절한 것을 매개변수로 바꿔서
//       show_value 함수를 정의하세요.
void show_value(int num1, int num2) {
	int result = 0;
	while (num1 <= num2) {
		result += num1;
		num1 += 1;
	}
	printf("R : %d\n", result);
}

// 문제4) 문제1에서 만든 function에서 문제2와 문제3에서 적용한 것을
//       모두 적용하여 calculate 함수를 정의하세요.
int calculate(int num1, int num2) {
	int result = 0;
	while (num1 <= num2) {
		result += num1;
		num1 += 1;
	}
	return result;
}

int main(void) {
	// main함수는 코드(함수, 프로그램)의 실행을 담당한다.
	/*1번 실행코드*/
	function();
	/*2번 실행코드*/
	int result = get_value();
	printf("3과 곱한 결과 : %d\n", result * 3);
	/*3번 실행코드*/
	int n1 = 10; int n2 = 100;
	show_value(n1, n2);
	/*4번 실행코드*/
	int n3 = 10; int n4 = 100;
	printf("%d부터 %d까지의 합 : %d\n", n3, n4, calculate(n3, n4));
	return 0;
}

//int main(void) {
//	int num1 = 0;
//	int num2 = 0;
//	int result = 0;
//	printf("1 >> "); scanf_s("%d", &num1);
//	printf("2 >> "); scanf_s("%d", &num2);
//	while (num1 <= num2) {
//		result += num1;
//		num1 += 1;
//	}
//	printf("R : %d\n", result);
//	return 0;
//}