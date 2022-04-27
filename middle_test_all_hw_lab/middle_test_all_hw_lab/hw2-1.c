#include<stdio.h>

int main() {
	int time, hour, min, sec;
	printf("Enter total time passed in seconds:\n");
	scanf_s("%d", &time);

	hour = time / 3600;
	min = (time % 3600) / 60;
	sec = (time % 3600) % 60;

	printf("\n%d:%d:%d [hours : minutes : seconds]", hour, min, sec);
}