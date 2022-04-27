#include<stdio.h>

int main() {
	int layer;
	printf("Enter size of triangle to display : ");
	scanf_s("%d", &layer);
	
	for (int i = 0; i < layer; i++) {
		for (int j = 0; j < layer-i; j++) {
			printf("*");
		}
		printf("\n");
	}
}