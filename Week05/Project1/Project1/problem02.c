#include<stdio.h>

int main(){
	int num=0, add=1;
	while (add < 100) {
		num = num + add;
		add = add + 2;
	}
	printf("1~100���� Ȧ������ ��� ���ϸ� %d�� �˴ϴ�", num);
}