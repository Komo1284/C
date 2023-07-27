#include <stdio.h>

int main(void) {
	// 서식문자에 서식설정하기
	// - 문자열에 서식문자를 배치해서 반영하기 -> 큰 틀 만들기
	// - 서식문자에 세부규칙을 설정하기 -> 개별설정

	// 공통규칙 : 폭설정하기 - 정렬용
	int num1 = 1;
	int num2 = 11;
	int num3 = 111;
	// 지정한 칸수 내에서 오른쪽 정렬하기
	printf("%3d\n%3d\n%3d\n", num1, num2, num3);
	// 좌측정렬도 가능
	printf("%3d\n%-3d\n%3d\n", num1, num2, num3);

	// 개별규칙 : .0 ~ .99 -> 서식문자별로 다름
	char word[100] = "사과파이\n";
	int num = 111;
	double fnum = 3.523456789;
	// 문자변수는 키보드상의 영어만 가능. 그 외는 문자열로만 가능
	printf("%.4s\n", word); // 한글은 2씩 올려서 조절
	printf("000%d초\n", num);
	printf("%.4d초\n", num); // 지정한 자리만큼 0을 붙여줌
	printf("%.0lf\n", fnum); 
	printf("%.2lf\n", fnum); // 근사값에 맞춰주는 반올림처리가 됨
	printf("%.30lf\n", fnum);
	return 0;
}