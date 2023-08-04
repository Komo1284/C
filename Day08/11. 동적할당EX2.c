#include <stdio.h>
#include <malloc.h>

void REVIEW1(void) {
	// 동적할당 : 변수를 실시간으로 생성/삭제하기
	// - 필요한 만큼 만들어 쓰는 것이 주 목적
	// -> 생성 - 사용 - 삭제 과정이 생김
	int* pnum = (int*)malloc(sizeof(int));
	*pnum = 0;
	printf("입력 > "); scanf_s("%d", pnum);
	printf("결과 : %d\n", *pnum);
	free(pnum);
}
void REVIEW2(void) {
	// 동적할당시 주의사항 : 변수가 생성되었는지 확인해야 함
	// - 실패하면 변수 생성이 안됨
	// -> 조건문을 이용해 걸러내야 함
	int* pnum = (int*)malloc(sizeof(int));
	if (pnum != NULL) {
		*pnum = 0;
		printf("입력 > "); scanf_s("%d", pnum);
		printf("결과 : %d\n", *pnum);
	}
	else printf("실패\n");
	if (pnum != NULL) {
		free(pnum);
		pnum = NULL;
	}
}

int main(void) {
	double* dnum1 = (double*)malloc(sizeof(double));
	double* dnum2 = (double*)malloc(sizeof(double));
	if (dnum1 != NULL && dnum2 != NULL) {
		*dnum1 = 0;
		*dnum2 = 0;
		printf("실수값 2개 입력 >> ");
		scanf_s("%lf", dnum1);
		scanf_s("%lf", dnum2);
		printf("저장된 값 : %.1lf, %.1lf\n", *dnum1, *dnum2);
		printf("두 수의 합 : %.2lf\n", *dnum1 + *dnum2);
	}
	else printf("동적할당 실패\n");
	if (dnum1 != NULL) {
		free(dnum1);
		dnum1 = NULL;
	}
	if (dnum2 != NULL) {
		free(dnum2);
		dnum2 = NULL;
	}
	return 0;
}