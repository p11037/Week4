#include<stdio.h>
int main() {

	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n - i - 1; j++) {

			printf(" ");

		}

		for (int m = 0; m < (i * 2) + 1; m++) {

			printf("*");

		}
		printf("\n");
	}
	return 0;
}