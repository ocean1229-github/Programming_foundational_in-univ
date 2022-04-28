#include<stdio.h>

int main() {
	char key;
	printf("type a character: ");
	scanf_s("%c", &key);
	printf("the integer value of the character is %d", key);

	printf("\n%d", 'm' - 5);
	printf("\n%d", 'g' - 'a' + 1);
	printf("\n%d", '5' - '3');
}