#include <stdio.h>
#include <stdlib.h>
void fun(char c, int n) {
    int i;
    printf("%c:", c);
    for (i = 0; i < n; i++)
        putchar('*');
    printf("\n");
}

int main() {
    FILE* fp;
    int a, e, i, o, u;
    char filename[256];
    char c;

    int select;

    puts("1读行  2读文件");

    scanf("%d", &select);
    getchar();
    a = e = i = o = u = 0;
    if (select == 1) {
        while ((c = getchar()) != EOF) {
            switch (c) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            }
        }
    } else {
        printf("请输入要统计的文件名:");
        gets(filename);
        fp = fopen(filename, "r");
        if (fp == NULL) {
            printf("打开文件失败~!");
            exit(-2);
        }

        while ((c = fgetc(fp)) != EOF) {
            putchar(c);
            switch (c) {
            case 'a':
            case 'A':
                a++;
                break;
            case 'e':
            case 'E':
                e++;
                break;
            case 'i':
            case 'I':
                i++;
                break;
            case 'o':
            case 'O':
                o++;
                break;
            case 'u':
            case 'U':
                u++;
                break;
            }
        }
    }

    putchar('\n');

    fun('a', a);
    fun('e', e);
    fun('i', i);
    fun('o', o);
    fun('u', u);

    return 0;
}