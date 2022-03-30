#include<stdio.h>

void main(){
	float area, radius;
	printf("write radius : ");
	scanf_s("%f", &radius);

	area = radius * radius * 3.14;

	printf("%f", area);
}