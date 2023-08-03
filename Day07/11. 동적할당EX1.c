#include <stdio.h>
#include <malloc.h>

void EX(void) {
	// 동적할당은 실패할 수 있다.
	// - 컴퓨터 메모리 부족 / OS의 버그
	// - 성공하면 임의의 주소값 / 실패하면 NULL( 0 )이 나옴
	// - 실 사용시에는 조건문으로 경우의 수를 잡아서 통제해야 함
	
	// 1) 공간생성
	int* pnum1 = (int*)malloc(sizeof(int));
	int* pnum2 = (int*)malloc(sizeof(int));
	// 2) 생성된 공간이 있는지를 점검
	if (pnum1 != NULL && pnum2 != NULL) {
		// 있으면 원하는 절차 실행
		*pnum1 = 10;
		*pnum2 = 20;
		printf("변수에 저장된 값 : %d, %d\n", *pnum1, *pnum2);
	}
	else {
		// 없으면 실행하지 않고 경고를 출력
		printf("1개 이상의 변수가 동적할당에 실패했습니다.\n");
	}
	// 3) 공간이 생성되었을 경우에만 제거
	if (pnum1 != NULL) {
		free(pnum1);	// 할당된 공간을 HEAP으로부터 제거
		pnum1 = NULL;	// 포인터 변수에 저장된 주소값 제거
	}
	if (pnum2 != NULL) {
		free(pnum2);
		pnum2 = NULL;
	}

	
}

int main(void) {
	
	int* pnum1 = (int*)malloc(sizeof(int));
	int* pnum2 = (int*)malloc(sizeof(int));

	*pnum1 = 10;
	*pnum2 = 20;
	printf("변수에 저장된 값 : %d, %d\n", *pnum1, *pnum2);
	
	free(pnum1);
	free(pnum2);
	
	return 0;
}