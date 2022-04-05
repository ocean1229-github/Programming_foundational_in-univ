#include<stdio.h>

int main() {
	int num, sum=0;
	int i, j;
	printf("Program to print a list of prime numbers up to and including their addition\n");
	printf("Enter the number: ");
	scanf_s("%d", &num);
	for (i = 2; i < num; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
		printf("%d \n", i);
		sum = sum + i;
		}
	}
	printf("The sum of all primes is %d", sum);
}