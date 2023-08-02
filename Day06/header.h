#pragma once

char inputc(void) {
	char ch = 0;
	scanf_s(" %c", &ch, 1);
	return ch;
}
int inputi(void) {
	int num = 0;
	scanf_s(" %d", &num);
	return num;
}
double inputf(void) {
	double dnum = 0;
	scanf_s("%lf", &dnum);
	return dnum;
}
