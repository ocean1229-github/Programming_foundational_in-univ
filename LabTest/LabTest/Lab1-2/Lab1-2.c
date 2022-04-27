#include<stdio.h>

int main() {
	int grade, total, avg, i=0;
	while (grade==-1) {
		printf("Enter your Grade!!");
		scanf_s("%d", &grade);

		total = total + grade;
		
		i ++;
		avg = total / i;
	}
	printf("total is %d, avg is %d", total, avg);
}
