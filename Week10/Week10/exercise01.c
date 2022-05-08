#include<stdio.h>

int main() {
	char string1[81], string2[81], string3[81];
	int i = 0;
	int j = 0;

	printf("first string: ");
	gets(string1);
	printf("second string: ");
	gets(string2);

	while (string1[i] != '\0') {
		string3[i] = string1[i];
		i = i + 1;
	}

	while (string2[j] != '\0') {
		string3[j + i] = string2[j];
		j = j + 1;
	}
	string3[i+j] = '\0';
	printf("result of append: ");
	puts(string3);
	
}