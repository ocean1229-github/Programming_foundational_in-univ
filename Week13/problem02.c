#include <stdio.h>
int myatoi(char* str);

int main(void) {
    char str[20] = "";
    int num = 0;
    int tmp = 0;
    gets(str);
    // 문자 끝에 오는 널 문자 -> '/'로 바꾸기 
    str[strlen(str)] = '/';

    while ((tmp = myatoi(str)) != '/')
        num = 10 * num + tmp;

    printf("처리 결과: %d", num);
}

int myatoi(char* str) {
    static int idx = 0;
    // 음수가 올 때 처리 
    if (str[0] == '-') {
        if (str[idx + 1] == '/') // 음수 처리 중 마지막 /문자가 올 때!
            return '/';
        return -(str[++idx] - '0');
    }
    // 양수나 0이 올 때 처리 
    else {
        if (str[idx] == '/') // 양수,0 처리 중 마지막 /문자가 올 때! 
            return '/';
        return str[idx++] - '0';
    }
}