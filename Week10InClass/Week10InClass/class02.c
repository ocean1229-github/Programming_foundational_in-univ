#include<stdio.h>

int main() {
	char message[81];
	char c;
	int i;

	printf("enter a string : \n");
	i = 0;
	while (1) {
		c = getchar();
		if (c == '\n' || i == 80)
			break;
		message[i] = c;
		i = i + 1;
	}
	message[i] = '\0';
	printf("the string just entered is \n");
	puts(message);
}