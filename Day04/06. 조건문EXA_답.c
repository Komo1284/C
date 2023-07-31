#include <stdio.h>

int main(void) {
	double score = 0;
	double result = 0;
	printf("1번 점수 >> "); scanf_s("%lf", &score);
	// 팁 : else쪽으로 몰리도록 구성하시는게 좋음
	if (score < 0 || score > 100) {
		printf("1번 점수가 잘못되었습니다. 다시 처음부터 하세요.\n");
	}
	else {
		result += score;
		printf("2번 점수 >> "); scanf_s("%lf", &score);
		if (score < 0 || score > 100) {
			printf("2번 점수가 잘못되었습니다. 다시 처음부터 하세요.\n");
		}
		else {
			result += score;
			result /= 2;
			printf("평균 : %.1lf점", result);
			if (result >= 90) printf("(상)\n");
			else if (result >= 80) printf("(중)\n");
			else printf("(하)\n");
		}
	}
	return 0;
}