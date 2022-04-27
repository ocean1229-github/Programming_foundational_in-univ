#include<stdio.h>

int main() {
	float gallon, num, formula;
	for (gallon=20; gallon <= 40; gallon = gallon+2) {
		formula = gallon * 3.785;
		printf("%.f gallon = %.2f liters\n", gallon, formula);
	}
}