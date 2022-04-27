#include<stdio.h>

int main() {
	int num, first, second, third, fourth, fifth;

	printf("Enter the number : ");
	scanf_s("%d", &num);

	first = num / 10000;
	second = (num % 10000) / 1000;
	third = (num % 10000) % 1000 / 100;
	fourth = (num % 10000) % 1000 % 100 / 10;
	fifth = (num % 10000) % 1000 % 100 % 10;

	printf("%d\t%d\t%d\t%d\t%d", first, second, third, fourth, fifth);
}