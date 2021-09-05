#include<stdio.h>

int main() {

	int a;
	scanf_s("%d", &a);

	int an = 1 + (a - 1) * 2;

	for (int i = 0; i < a; i++) {

		for (int j = 1; j <= an; j++) {

			if (j>=a-i&&j<=a+i)

				printf("*");

			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}