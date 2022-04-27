#include<stdio.h>

int main() {
	int num ,big=0,small=0;
	float totalBig=0, totalSmall=0, avgBig=0, avgSmall=0;
	printf("enter number = ");
	scanf_s("%d", &num);
	while (num != -1) {
		if (num >= 10) {
			big = big + 1;
			totalBig = totalBig + num;
		}
		else {
			small = small + 1;
			totalSmall = totalSmall + num;
		}
		printf("enter number = ");
		scanf_s("%d", &num);
	}
	avgBig = totalBig / big;
	avgSmall = totalSmall / small;
	printf("\n%d, total = %f, avg = %f\n",big, totalBig, avgBig);
	printf("\n%d, total = %f, avg = %f\n",small, totalSmall, avgSmall);
}