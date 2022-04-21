#include<stdio.h>

int main() {
	int i, k, num1[15], num2[5];

	for (i = 0; i < 5; i++) {
		printf("\n type a number");
		scanf_s("%d", &num2[i]);
	}
	for (k = 0; k < 10; k++) {
		printf("\n type a number");
		scanf_s("%d", &num1[k]);
	}
	for (i = 0; i < 5; i++)
		num1[i + k] = num2[i];

	for (i = 0; i < 15; i++)
		printf("\n %d num1 = %d", i+1, num1[i]);
}