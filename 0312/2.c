#include <stdio.h>
#include <string.h>
int main() {
    //字符数组与字符串 注意 字符串最后是以\0结尾
    char s[] = "day\0ay", s1[] = "day";
    int i;

    printf("sizeof(s)=%d\n", sizeof(s));
    printf("sizeof(s1)=%d\n", sizeof(s1));

    printf("strlen(s)=%d\n", strlen(s));
    printf("strlen(s1)=%d\n", strlen(s1));

    //问题 当把s1串复制给s删后，数组内发生的变化
    strcpy(s, s1);
    for (i = 0; i < 6; i++)
        printf("s[%d]=%c:%d\n", i, s[i], s[i]);

    return 0;
}
