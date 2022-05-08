#include<stdio.h>

int main() {
	char line[81];
	int i = 0;
	printf("type a string : ");
	gets(line);
	while (line[i] != '\0') {
		if (line[i] >= 65 && line[i] <= 90)
			line[i] = line[i] + 32;
		i++;
	}
	puts(line);
}