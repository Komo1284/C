#include <stdio.h>
#include <malloc.h>

int* var(void) {
	int num = 100;
	return &num;
}
void EX(void) {
	// 변수를 공유할 때 제한사항
	// - 다른 곳에서 공유하기 위해 가져갈 수 있음 -> 매개변수
	// - 반환을 통해서 필요한 곳에 공유시켜줄 수 없음
	// -> 변수는 선언된 곳에 종속됨
	// -> 선언된 곳이 사라지면 변수도 사라짐
	int* pnum = var();
	printf("%d\n", *pnum);
	*pnum = 200;
	var();
	printf("%d\n", *pnum);
}

int main(void) {
	// 동적할당은, 변수를 선언하지 않고 생성하는 기술
	// -> 어딘가에 종속되지 않도록 만드는 것은 불가능함
	// -> 완전 별개 공간인 HEAP(사용자영역)에 변수를 선언하고...
	//    이를 주소값만 줘서 알아서 쓰라고 준비해주는 것

	// 프로그램 : 공간생성 -> 공간사용 -> 공간제거
	// 1) 공간 생성
	// -> 자료형* 포인터변수 = (자료형*)malloc(sizeof(자료형));
	// -> 자료형은 내가 필요한 값의 종류로 지정함
	int* pnum1 = (int*)malloc(sizeof(int));
	int* pnum2 = (int*)malloc(sizeof(int));

	// 2) 공간사용 - 포인터변수의 사용방식을 따라감
	// -> 여기서 실행을 원하는 프로그램 코드를 작성하게 됨.
	// -> 함수로 묶여서 실행이 관리됨
	// ※ 자료 -> 처리 -> 정보를 구성하는 곳
	*pnum1 = 0;	// - 동적할당된 공간은 초기화가 안되어 있음
	*pnum2 = 0;	//   초기화를 해야만 함
	printf("정수 2개 입력 >> ");
	scanf_s("%d", pnum1);
	scanf_s("%d", pnum2);
	printf("결과 : %d\n", *pnum1 + *pnum2);

	// 3) 공간제거
	// -> free(포인터변수);
	// -> 하나만 넣어야 함
	free(pnum1);
	free(pnum2);
	return 0;
}