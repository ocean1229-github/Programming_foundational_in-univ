#include<stdio.h>

int main() {
	int year, birth;
	printf("enter the this year : ");
	scanf_s("%d", &year);
	printf("\nenter your birthyear : ");
	scanf_s("%d", &birth);

	printf("%d is your age", year - birth + 1);
}