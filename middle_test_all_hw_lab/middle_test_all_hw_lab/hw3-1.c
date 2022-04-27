#include<stdio.h>

int main() {
	int num;
	printf("enter : ");
	scanf_s("%d", &num);

	if (num / 10000 == num % 10000 % 1000 % 100 % 10 && num % 10000 / 1000 == num % 10000 % 1000 % 100 / 10) {
		printf("%d is par", num);
	}
	else
		printf("no");
}