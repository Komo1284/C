#include <stdio.h>

int main(void) {
	int ram1 = 8;
	int ram2 = 12;
	int ram3 = 16;
	int search_data = 0;

	printf("찾고 있는 램의 크기는? >> ");
	scanf_s("%d", &search_data);

	printf("결과1 : %d\n", ram1 == search_data); // 이 결과와 반대는 불일치( != )
	printf("결과2 : %d\n", ram2 == search_data);
	printf("결과3 : %d\n", ram3 == search_data);
	// 이상 <-> 미만, 이하 <-> 초과
	printf("비교1 : %d, %d\n", ram2 > search_data, ram2 >= search_data);
	printf("비교2 : %d, %d\n", ram3 < search_data, ram3 <= search_data);

	return 0;
}