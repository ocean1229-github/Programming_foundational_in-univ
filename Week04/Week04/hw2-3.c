#include<stdio.h>

int main() {
	float BMI, weightInKilograms, heightInMeters, heightInCentiMeters;
	
	printf("BMI Values\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal: between 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese: 30 or greater\n\n");
	
	printf("write your weight in kilograms : \n");
	scanf_s("%f", &weightInKilograms);

	printf("write your height in CentiMeters : \n");
	scanf_s("%f", &heightInCentiMeters);

	heightInMeters = heightInCentiMeters / 100;
	
	BMI = weightInKilograms / (heightInMeters * heightInMeters);

	printf("\n");

	printf("BMI : %f\n", BMI);



	if (BMI < 18.5) {
		printf("you are Underweight!!");
	}
	else if (BMI >= 18.5 & BMI < 24.9) {
		printf("you are Normal!!");
	}
	else if (BMI >= 24.9 & BMI < 29.9) {
		printf("you are Overweight!!");
	}
	else {
		printf("you are Obese!!");	
	}

}