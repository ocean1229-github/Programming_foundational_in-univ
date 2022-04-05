#include<stdio.h>

int main() {
	int i, j;
	for (i = 1; i <= 9; i = i + 1) {
		printf("\n\n%d ´Ü", i);

		for (j = 1; j <= 9; j = j + 1)
			printf("\n %d x %d = %d", i, j, i * j);
	}
}