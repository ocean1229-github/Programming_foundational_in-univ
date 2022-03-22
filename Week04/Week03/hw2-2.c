#include<stdio.h>

int main() {
	int num, first, second, third, forth, fifth;

	printf("write the five-digit number : \n");
	scanf_s("%d", &num);

	printf("\n");

	first = num / 10000;
	second = (num % 10000) / 1000;
	third = ((num % 10000) % 1000) / 100;
	forth = (((num % 10000) % 1000) % 100) / 10;
	fifth = (((num % 10000) % 1000) % 100) % 10;

	printf("%d   %d   %d   %d   %d\n", first, second, third, forth, fifth);
}