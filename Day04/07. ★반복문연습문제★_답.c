#include <stdio.h>

int main(void) {
	// 1) 1���� 10���� ����ϼ���.
	// -> �������� ���������� �ݺ����̰�, �̰� 10ȸ �ݺ��մϴ�.
	int num1 = 1;
	while (num1 <= 10) {
		printf("%d ", num1);
		num1 += 1;
	} printf("\n");
	for (int i = 1; i <= 10; i += 1) {
		printf("%d ", i);
	} printf("\n");

	// 2) 10���� 1���� ����ϼ���.
	// -> �������� ���ҹ����� �ݺ����̰�, �̰� 10ȸ �ݺ��մϴ�.
	int num2 = 10;
	while (num2 >= 1) {
		printf("%d ", num2);
		num2 -= 1;
	} printf("\n");
	for (int i = 10; i >= 1; i -= 1) {
		printf("%d ", i);
	} printf("\n");

	// 3) 0���� 5���� ����ϼ���.
	// -> �Ĺݺο��� ���� ���� ������ ���ڹݺ����Դϴ�.
	int num3 = 0;
	while (num3 < 6) {
		printf("%d ", num3);
		num3 += 1;
	} printf("\n");
	for (int i = 0; i < 6; i += 1) {
		printf("%d ", i);
	} printf("\n");

	// 4) 3)�� �ڵ�ʹ� �ٸ� �������� 0���� 5���� ����ϼ���.
	// -> while�� �������� ��ġ�� �ٲ㼭 �ٸ� ���ڷε� ����ϰ� ������ �� �ֽ��ϴ�.
	// -> ������ for�� ������ �����̱⿡ ���ο��� ���� �ٸ� ������ ���� �ٲ��ְ� �˴ϴ�.
	int num4 = -1;
	while (num4 < 5) {
		num4 += 1;
		printf("%d ", num4);
	} printf("\n");
	for (int i = 1; i < 7; i += 1) {
		printf("%d ", i - 1);
	} printf("\n");

	// 5) ������ 2���� �Է��� �޾� ������ ������ �ִ� 1�� �����ϴ� ������
	//    ����ϼ���.
	// -> Ư�� ������ �ִ� �ڷḦ Ž���� �� ������ �Է��� �޽��ϴ�.
	// ex) 100������ 199�� ������ ����ö�� ã�ƺ���.
	// -> �� �� for�� �ʿ��� ���� ����/�̿븸 ������  while�� �ݵ�� ���ƹ����ϴ�.
	int start1 = 0; int end1 = 0;
	printf("���� >> "); scanf_s("%d", &start1); scanf_s("%d", &end1);
	for (int i = start1; i <= end1; i += 1) {
		printf("%d ", i);
	} printf("\n");
	while (start1 <= end1) {
		printf("%d ", start1);
		start1 += 1;
	} printf("\n");
	
	// 6) 5)�� �ڵ�� ��µǴ� �� �߿��� ¦���� ����ϼ���.
	// -> ������� �������� �ƴ� ������ �������� ���Ͽ� �����մϴ�.
	// -> �� �� ������ ������ �Ű澲�� ������, ���۰��� �߿��մϴ�.
	int start2 = 0; int end2 = 0;
	printf("���� >> "); scanf_s("%d", &start2); scanf_s("%d", &end2);

	// �� ���۰��� ���ϴ� �����̸�, ��ȣ�� �����̰ų� ������ �������� �� ���ϰ�
	//   �� �ܿ��� �� 1�� ���Ͽ� �ٻ簪�� ���մϴ�.
	if (start2 <= 0 || start2 % 2 == 0) start2 = (start2 / 2) * 2;
	else start2 = (start2 / 2 + 1) * 2;

	for (int i = start2; i <= end2; i += 2) {
		printf("%d ", i);
	} printf("\n");
	while (start2 <= end2) {
		printf("%d ", start2);
		start2 += 2;
	} printf("\n");

	// 7) 5)�� �ڵ�� ��µǴ� �� �߿��� 3�� �����° ���鸸 ����ϼ���.
	//    ��� ��°� �ƴ϶�, �����°�� �غ�Ǵ� ���� ����Դϴ�.
	// -> �����° ����� ���� ���� ������ ���� �غ� �ϰų�...
	// -> 3��°���� �������� �������� �����ϰ� �˴ϴ�.
	int start3 = 0; int end3 = 0;
	printf("���� >> "); scanf_s("%d", &start3); scanf_s("%d", &end3);
	
	// case 1 : ����� �����Ͽ� ����ϱ�
	for (int i = start3 + 2; i <= end3; i += 3) {
		printf("%d ", i);
	} printf("\n");
	start3 += 2;
	while (start3 <= end3) {
		printf("%d ", start3);
		start3 += 3;
	} printf("\n");

	// case 2 : ��° �ĺ��ϱ�
	int start4 = 0; int end4 = 0;
	int count1 = 1; int count2 = 1;
	printf("���� >> "); scanf_s("%d", &start4); scanf_s("%d", &end4);
	// case 1 : ����� �����Ͽ� ����ϱ�
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