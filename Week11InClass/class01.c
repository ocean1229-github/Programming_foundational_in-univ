#include<stdio.h>

void tempConvert(char);						/*fuction prototype*/

void main() {
	char ForC = 'F';	
	tempConvert(ForC);						/*fuction	call*/
}

void tempConvert(char FC) {					/*function definition*/
	int temp = 126;
	float newTemp;
	if (FC == 'F')
		newTemp = (temp - 32) * 5.0 / 9;
	else
		newTemp = temp * 9.0 / 5 + 32;
	printf("new temperature = %f", newTemp);
}