#include<stdio.h>

int main() {
	char string1[81], string2[81];
	int i = 0;
	gets(string2);

	while (string2[i] != '\0') {
		string1[i] = string2[i];
		i = i + 1;

	}
	string1[i] = '\0';
	puts(string1);

	/*
	----------------------------------------------------
	char string1[81], string2[81];
	int i = 0;
	gets(string2);

	while (string2[i]) {
		string1[i] = string2[i];
		i = i + 1;

	}
	string1[i] = '\0';
	puts(string1);
	*/
	/*
	-----------------------------------------------------
		char string1[81], string2[81];
	int i = 0;
	gets(string2);

	while (string1[i]=string2[i]) {
		i = i + 1;
	}
	*/
}