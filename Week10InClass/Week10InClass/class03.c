#include<stdio.h>

int main() {
	char string[81];
	int i = 0;
	printf("type a sentence: \n");
	gets(string);

	while (string[i] != '\0')
		i = i + 1;

	printf("number of characters = %d", i);
}