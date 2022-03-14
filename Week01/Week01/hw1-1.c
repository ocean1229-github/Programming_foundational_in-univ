#include<stdio.h>

int main() {

	int birth,  now;
	printf("출생연도를 입력하시오 : ");
	scanf_s("%d", &birth);
	
	printf("\n");

	printf("현재 연도를 입력하시오 : ");
	scanf_s("%d", &now);

	printf("\n");

	printf("당신의 나이는 %d살 입니다.", now - birth + 1);

}