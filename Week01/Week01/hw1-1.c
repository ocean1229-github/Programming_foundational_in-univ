#include<stdio.h>

int main() {

	int birth,  now;
	printf("��������� �Է��Ͻÿ� : ");
	scanf_s("%d", &birth);
	
	printf("\n");

	printf("���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &now);

	printf("\n");

	printf("����� ���̴� %d�� �Դϴ�.", now - birth + 1);

}