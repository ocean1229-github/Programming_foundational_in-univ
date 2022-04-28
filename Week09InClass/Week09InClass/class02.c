#include<stdio.h>

int main() {
	int num;
	char ch;

	printf("Please type a number: ");
	scanf_s("%d", &num);
	printf("%d\n", num);

	printf("Please type a character: ");
	scanf_s(" %c", &ch);
	printf("%c", ch);
}