#include <stdio.h>
int myatoi(char* str);

int main(void) {
    char str[20] = "";
    int num = 0;
    int tmp = 0;
    gets(str);
    // ���� ���� ���� �� ���� -> '/'�� �ٲٱ� 
    str[strlen(str)] = '/';

    while ((tmp = myatoi(str)) != '/')
        num = 10 * num + tmp;

    printf("ó�� ���: %d", num);
}

int myatoi(char* str) {
    static int idx = 0;
    // ������ �� �� ó�� 
    if (str[0] == '-') {
        if (str[idx + 1] == '/') // ���� ó�� �� ������ /���ڰ� �� ��!
            return '/';
        return -(str[++idx] - '0');
    }
    // ����� 0�� �� �� ó�� 
    else {
        if (str[idx] == '/') // ���,0 ó�� �� ������ /���ڰ� �� ��! 
            return '/';
        return str[idx++] - '0';
    }
}