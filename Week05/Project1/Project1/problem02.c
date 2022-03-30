#include<stdio.h>

int main(){
	int num=0, add=1;
	while (add < 100) {
		num = num + add;
		add = add + 2;
	}
	printf("1~100까지 홀수들을 모두 더하면 %d가 됩니다", num);
}