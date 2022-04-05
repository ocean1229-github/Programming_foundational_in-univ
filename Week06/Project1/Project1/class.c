#include<stdio.h>

int main() {

int i, max = 3;
float num, total, average;

total = 0.0;
	for (i = 1; i <= max; i = i + 1) 
	{
	printf("\nEnter a float number: ");
	scanf_s("%f", &num);
	total = total + num;
	}
average = total / max;

}