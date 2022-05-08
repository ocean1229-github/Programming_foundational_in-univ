#include<stdio.h>

int main() {
	char message[81];

	printf("type a sentence: \n");
	gets(message);
	puts(message);
	
	scanf_s("%s", message);
	puts(message);
}