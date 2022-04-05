#include<stdio.h>

int main(){
	int layer;
	printf("Enter the number of floors you want to create : ");
	scanf_s("%d", &layer);

	for (int i = 0; i < layer; i++) {
		for (int j = i + 1; j > 0; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}
}