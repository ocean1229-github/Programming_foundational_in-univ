#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void main() {
	int i, count;
	float random_no;

	srand(time(NULL));

	scanf_s("count = %d\n", &count);
	for (i = 1; i <= count; i = i + 1) {
		random_no = rand();
		printf("%10.3f", random_no);
	}
}