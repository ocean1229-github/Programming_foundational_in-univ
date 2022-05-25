#include <stdio.h>
int myatoi(char num[10]) {
	int tmp = 0;
	int minus = 1;
	int i = 0;

	if (num[0] == '-') {
		minus = -1;
		i++;			
	}
	for (; num[i] != '\0'; ++i) {   
		if (num[i] >= '0' && num[i] <= '9') {
			tmp = tmp * 10 + num[i] - '0';
		}

	}
	return minus * tmp;
}

int main() {
	char num[10];
	int count = 0;
	printf("Enter the test case : \n");
	scanf_s("%d", &count);
	for (int i = 0; i < count; i++) {
		printf("\nEnter the string number\n");
		scanf_s("%s", num, 10);

		printf("\nint number : %d\n", myatoi(num));
		printf("---------------------------------");
	}
	return 0;
}