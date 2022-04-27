#include<stdio.h>

int main() {

	int bmi, pound, inch;

	printf("enter your inch : ");
	scanf_s("%d", &inch);

	printf("enter your pound : ");
	scanf_s("%d", &pound);

	bmi = pound * 703 / (inch * inch);

	printf("\nyour bmi is %d\n\n", bmi);

	if (bmi < 18.5) {
		printf("\nyour underweight");
	}
	else if (bmi < 24.9 && bmi >= 18.5) {
		printf("\nyour Normal");
	}
	else if (bmi <= 29.9 && bmi>25) {
		printf("\nyour Overweight");
	}
	else
		printf("\nyour Obese");
}