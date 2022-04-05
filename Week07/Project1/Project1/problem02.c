#include<stdio.h>

int main() {
	int num1, num2, num3;
	int sum, avg, pro, sm, la;
	printf("Input three different integers: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	avg = sum / 3;
	pro = num1 * num2 * num3;
	
	printf("Sum is %d\n", sum);
	printf("Average is %d\n", avg);
	printf("Product is %d\n", pro);

	if (num1 < num3 && num1 < num2) {
		printf("Smallest is %d\n", num1);
	}
	else if (num2 < num1 && num2 < num3) {
		printf("Smallest is %d\n", num2);
	}
	else if (num3 < num1 && num3 < num2) {
		printf("Smallest is %d\n", num3);
	}
	else {
		if (num1 == num2 && num1 != num3) {
			printf("%d and %d is same!!\n", num1, num2);
		}
		else if (num2 == num3 && num2 != num1) {
			printf("%d and %d is same!!\n", num2, num3);
		}
		else if (num1 == num3 && num1 != num2) {
			printf("%d and %d is same!!\n", num1, num3);
		}
		else if (num1 == num2 == num3) {
			printf("all is same!!!\n");
		}
		else {
			printf("Err\n");
		}
	}
	
	
	
	if (num1 > num3 && num1 > num2) {
		printf("Largest is %d\n", num1);
	}
	else if (num2 > num1 && num2 > num3) {
		printf("Largest is %d\n", num2);
	}
	else if (num3 > num1 && num3 > num2) {
		printf("Largest is %d\n", num3);
	}
	else {
		if (num1 == num2 && num1 != num3) {
			printf("%d and %d is same!!\n", num1, num2);
		}
		else if (num2 == num3 && num2 != num1) {
			printf("%d and %d is same!!\n", num2, num3);
		}
		else if (num1 == num3 && num1!=num2) {
			printf("%d and %d is same!!\n", num1, num3);
		}
		else if (num1 == num2 == num3) {
			printf("all is same!!!\n");
		}
		else {
			printf("Err\n");
		}
	}
}