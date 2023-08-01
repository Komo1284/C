#include <stdio.h>

int main(void) {
	double score1 = 0;
	double score2 = 0;
	double score3 = 0;
	double avg = 0;
	char rank = 0;
	// 복습문제 : 점수 3개를 입력을 받아 평균을 구하고 등급을 출력하세요.
	// - 점수는 1점이상 200점이하여야 하고, 그 외에는 재입력을 받습니다.
	// - 등급은 150 이상이 A, 150미만 중 100이상이 B, 100미만 중 50이상이 C
	//   그 외에는 F입니다.
	// - 평균은 소수점 3자리까지 나오도록 맞추세요.
	// - 문제에서 이해 안되는 부분은 질문하시고, 이상한 방향으로 재해석하지 마세요.

	// 하나씩 받을 경우
	/*
	while (1) {
		printf("1번 점수를 입력하세요 >> ");
		scanf_s("%lf", &score1);
		if (score1 >= 1 && score1 <= 200) break;
		else printf("1이상 200이하여야 합니다.\n");
	}
	while (1) {
		printf("2번 점수를 입력하세요 >> ");
		scanf_s("%lf", &score2);
		if (score2 >= 1 && score2 <= 200) break;
		else printf("1이상 200이하여야 합니다.\n");
	}
	while (1) {
		printf("3번 점수를 입력하세요 >> ");
		scanf_s("%lf", &score3);
		if (score3 >= 1 && score3 <= 200) break;
		else printf("1이상 200이하여야 합니다.\n");
	}
	*/

	// 먼저 입력부터 받고 싶을 경우
	printf("점수 3개를 입력해주세요 >> ");
	scanf_s("%lf", &score1); scanf_s("%lf", &score2); scanf_s("%lf", &score3);
	while (score1 < 1 || score1 > 200) {
		printf("앗, 1번 점수가 이상해요.\n재입력 >> ");
		scanf_s("%lf", &score1);
	}
	while (score2 < 1 || score2 > 200) {
		printf("앗, 2번 점수가 이상해요.\n재입력 >> ");
		scanf_s("%lf", &score2);
	}
	while (score3 < 1 || score3 > 200) {
		printf("앗, 3번 점수가 이상해요.\n재입력 >> ");
		scanf_s("%lf", &score3);
	}
	avg = (score1 + score2 + score3) / 3;
	if (avg >= 150) rank = 'A';
	else if (avg >= 100) rank = 'B';
	else if (avg >= 50) rank = 'C';
	else rank = 'F';
	printf("평균 : %.3lf점(%c)\n", avg, rank);

	return 0;
}