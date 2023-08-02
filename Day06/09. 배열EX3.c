#include <stdio.h>

int main(void) {
	int arr[5];
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i += 1) {
		arr[0] = 15 * (i + 1);
		// An = 15 * (n + 1)
	}
	printf("배열에 저장된 값 : ");
	for (int i = 0; i < size; i += 1) {
		printf("%d ", arr[i]);
	} printf("\n");
	return 0;
}