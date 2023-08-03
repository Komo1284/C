#include <stdio.h>

int main(void) {
	// 포인터로 배열 이용하기
	// - 포인터는 저장공간을 공유하여 이용한다.
	// - 값은 복사될 수 있지만, 변수는 복사할 수 없음
	// -> 배열은 저장공간이 2중으로 구성되어 있다.
	int arr[3] = { 10, 20, 30 };
	int size = sizeof(arr) / sizeof(int);
	// arr : 관리변수 -> 배열변수
	printf("arr : %p\n", arr);
	for (int i = 0; i < size; i += 1) {
		// arr[i] : 정수변수 -> 배열의 요소
		printf("arr[%d] : %d\n", i, arr[i]);
	}
	// 문제상황 : 반복을 무너뜨려야 한다.
	// -> 관리변수가 관리하는 요소를 받아와서 이용한다.
	// -> 주소를 탐색할 수 있는 주소연산 기능을 이용함.
	int* parr = arr;	// 관리변수에 첫번째 주소값을 받아오고
	printf("%p %p\n", parr + 0, &arr[0]);	// 여기에 자동처리되는
	printf("%p %p\n", parr + 1, &arr[1]);	// 주소연산기능으로
	printf("%p %p\n", parr + 2, &arr[2]);	// 1씩 더해주면 자료형 크기만큼 증가
	printf("%d %d\n", *(parr + 0), arr[0]); // 주소연산결과를 참조하면
	printf("%d %d\n", *(parr + 1), arr[1]);	// 배열의 요소에 있는 값을 불러올 수 있음
	printf("%d %d\n", *(parr + 2), arr[2]);
	// - 더해주는 숫자가 인덱스의 역할을 수행함
	
	// 주의사항 : 크기는 원본으로 구해야 함
	// - 배열변수는 전체 크기정보를 담고 있음
	printf("arr size : %d\n", sizeof(arr));		// 전체공간의 크기
	// - 포인터변수는 주소값의 크기정보를 담고 있음
	printf("parr size : %d\n", sizeof(parr));	// 주소값의 크기
	return 0;
}