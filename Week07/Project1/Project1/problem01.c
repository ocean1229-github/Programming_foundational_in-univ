#include<stdio.h>

int main() {
	int num, first, second, third, fourth, fifth;
	printf("Enter a five-digit number: ");
	scanf_s("%d", &num);
	first = num / 10000;
	second = (num % 10000) / 1000;
	third = ((num % 10000) % 1000) / 100;
	fourth = (((num % 10000) % 1000) % 100) / 10;
	fifth = (((num % 10000) % 1000) % 100) % 10;

	if (num <= 99999 && num >= 0) {
		if (first == fifth && second == fourth) {
			printf("%d is a palindrome", num);
		}
		else {
			printf("%d is not a palindrome", num);
		}	
	}
	else {
		printf("Err!!");
	}
}