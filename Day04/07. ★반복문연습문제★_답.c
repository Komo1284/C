#include <stdio.h>

int main(void) {
	// 1) 1부터 10까지 출력하세요.
	// -> 기초적인 증가방향의 반복문이고, 이건 10회 반복합니다.
	int num1 = 1;
	while (num1 <= 10) {
		printf("%d ", num1);
		num1 += 1;
	} printf("\n");
	for (int i = 1; i <= 10; i += 1) {
		printf("%d ", i);
	} printf("\n");

	// 2) 10부터 1까지 출력하세요.
	// -> 기초적인 감소방향의 반복문이고, 이건 10회 반복합니다.
	int num2 = 10;
	while (num2 >= 1) {
		printf("%d ", num2);
		num2 -= 1;
	} printf("\n");
	for (int i = 10; i >= 1; i -= 1) {
		printf("%d ", i);
	} printf("\n");

	// 3) 0부터 5까지 출력하세요.
	// -> 후반부에서 많이 쓰는 형태의 숫자반복문입니다.
	int num3 = 0;
	while (num3 < 6) {
		printf("%d ", num3);
		num3 += 1;
	} printf("\n");
	for (int i = 0; i < 6; i += 1) {
		printf("%d ", i);
	} printf("\n");

	// 4) 3)의 코드와는 다른 구성으로 0부터 5까지 출력하세요.
	// -> while은 증감식의 위치를 바꿔서 다른 숫자로도 비슷하게 굴러갈 수 있습니다.
	// -> 하지만 for는 고정된 순서이기에 내부에서 값을 다른 연산을 통해 바꿔주게 됩니다.
	int num4 = -1;
	while (num4 < 5) {
		num4 += 1;
		printf("%d ", num4);
	} printf("\n");
	for (int i = 1; i < 7; i += 1) {
		printf("%d ", i - 1);
	} printf("\n");

	// 5) 정수값 2개를 입력을 받아 지정한 구간에 있는 1씩 증가하는 정수를
	//    출력하세요.
	// -> 특정 구간에 있는 자료를 탐색할 때 구간을 입력을 받습니다.
	// ex) 100번에서 199번 사이의 파일철을 찾아본다.
	// -> 이 때 for는 필요한 값을 복사/이용만 하지만  while은 반드시 갈아버립니다.
	int start1 = 0; int end1 = 0;
	printf("구간 >> "); scanf_s("%d", &start1); scanf_s("%d", &end1);
	for (int i = start1; i <= end1; i += 1) {
		printf("%d ", i);
	} printf("\n");
	while (start1 <= end1) {
		printf("%d ", start1);
		start1 += 1;
	} printf("\n");
	
	// 6) 5)의 코드로 출력되는 수 중에서 짝수만 출력하세요.
	// -> 배수들은 나머지가 아닌 몫으로 인접값을 구하여 통제합니다.
	// -> 이 때 끝나는 범위는 신경쓰지 않으며, 시작값이 중요합니다.
	int start2 = 0; int end2 = 0;
	printf("구간 >> "); scanf_s("%d", &start2); scanf_s("%d", &end2);

	// ※ 시작값을 구하는 연산이며, 부호가 음수이거나 나누어 떨어지면 몫만 구하고
	//   그 외에는 몫에 1을 더하여 근사값을 구합니다.
	if (start2 <= 0 || start2 % 2 == 0) start2 = (start2 / 2) * 2;
	else start2 = (start2 / 2 + 1) * 2;

	for (int i = start2; i <= end2; i += 2) {
		printf("%d ", i);
	} printf("\n");
	while (start2 <= end2) {
		printf("%d ", start2);
		start2 += 2;
	} printf("\n");

	// 7) 5)의 코드로 출력되는 수 중에서 3의 배수번째 수들만 출력하세요.
	//    배수 출력가 아니라, 배수번째로 준비되는 수의 출력입니다.
	// -> 배수번째 출력을 위한 별개 변수가 따로 준비를 하거나...
	// -> 3번째부터 나오도록 증가값을 조절하게 됩니다.
	int start3 = 0; int end3 = 0;
	printf("구간 >> "); scanf_s("%d", &start3); scanf_s("%d", &end3);
	
	// case 1 : 배수를 조절하여 출력하기
	for (int i = start3 + 2; i <= end3; i += 3) {
		printf("%d ", i);
	} printf("\n");
	start3 += 2;
	while (start3 <= end3) {
		printf("%d ", start3);
		start3 += 3;
	} printf("\n");

	// case 2 : 번째 식별하기
	int start4 = 0; int end4 = 0;
	int count1 = 1; int count2 = 1;
	printf("구간 >> "); scanf_s("%d", &start4); scanf_s("%d", &end4);
	// case 1 : 배수를 조절하여 출력하기
	for (int i = start4; i <= end4; i += 1) {
		if (count1 % 3 == 0) printf("%d ", i);
		count1 += 1;
	} printf("\n");
	while (start4 <= end4) {
		if (count2 % 3 == 0) printf("%d ", start4);
		start4 += 1;
		count2 += 1;
	} printf("\n");
	return 0;
}