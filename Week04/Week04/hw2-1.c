#include<stdio.h>

int main() {
	int time, hours, minutes, seconds;
	printf("Enter total time passed in seconds: \n");
	scanf_s("%d", &time);

	printf("\n");

	hours = time / 3600;
	minutes = (time%3600)  / 60;
	seconds = (time%3600)%60;

	printf("%d seconds is equivalent to : ", time);
	printf("%d:%d:%d [ hours : minutes : seconds ]", hours, minutes, seconds);
}