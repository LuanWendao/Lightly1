#include <stdio.h>
#include <string.h>
char A[10][10] = {
    "000000000", //
    "000000000", //
    "000000000", //
    "000000000", //
    "000000000", //
    "000000000", //
    "000000000", //
    "000000000", //
    "000000000", //
    "000000000", //
};

char CC[26][10][10] = {
    // a
    {
        "000000000", //
        "001111100", //
        "010000010", //
        "000000010", //
        "001111110", //
        "010000010", //
        "010000010", //
        "010000010", //
        "011111110", //
        "000000000", //
    },
    // b
    {
        "000000000",
        "010000000", //
        "010000000", //
        "010000000", //
        "011111100", //
        "010000010", //
        "010000010", //
        "010000010", //
        "011111100", //
        "000000000", //
    },

    // c
    {
        "000000000", //
        "000000000", //
        "000111100", //
        "001000000", //
        "010000000", //
        "010000000", //
        "001000000", //
        "000111100", //
        "000000000", //        
        "000000000", //
    },
    // d
    {
        "000000000", //
        "000000010", //
        "000000010", //
        "000000010", //
        "001111110", //
        "010000010", //
        "010000010", //
        "010000010", //
        "001111110", //
        "000000000", //
    },
    // e
    {
        "000000000", //
        "000000000", //
        "000111000", //
        "001000100", //
        "010000010", //
        "011111110", //
        "010000000", //
        "010000010", //
        "001111100", //
        "000000000", //
    },
    // f
    {
        "000000000", //
        "000011110", //
        "000100000", //
        "011111110", //
        "000100000", //
        "000100000", //
        "000100000", //
        "000100000", //
        "001000000", //
        "000000000", //
    },
    // g
    {
        "000000000", //
        "000000000", //
        "001111110", //
        "010000010", //
        "010000010", //
        "001111110", //
        "000000010", //
        "010000010", //
        "001111100", //
        "000000000", //
    },
    // h
    {
        "000000000", //
        "010000000", //
        "010000000", //
        "010000000", //
        "010111100", //
        "010000010", //
        "010000010", //
        "010000010", //
        "010000010", //
        "000000000", //
    },
    // i
    {
        "000000000", //
        "000010000", //
        "000000000", //
        "000110000", //
        "000010000", //
        "000010000", //
        "000010000", //
        "000010000", //
        "000011000", //
        "000000000", //
    },
    // j
    {
        "000000000", //
        "000010000", //
        "000000000", //
        "000110000", //
        "000010000", //
        "000010000", //
        "000010000", //
        "010010000", //
        "001010000", //
        "000100000", //
    },
    // k
    {
        "000000000", //
        "001000000", //
        "001001000", //
        "001010000", //
        "001100000", //
        "001000000", //
        "001100000", //
        "001010000", //
        "001001000", //
        "000000000", //
    },
    // l
    {
        "000000000", //
        "000010000", //
        "000010000", //
        "000010000", //
        "000010000", //
        "000010000", //
        "000010100", //
        "000011000", //
        "000000000", //
        "000000000", //
    },
    // m
    {
        "000000000", //
        "000000000", //
        "001000100", //
        "010101010", //
        "010010010", //
        "010010010", //
        "010010010", //
        "010010010", //
        "000000000", //
        "000000000", //
    },
    // n
    {

        "000000000", //
        "000000000", //
        "001111100", //
        "010000010", //
        "010000010", //
        "010000010", //
        "010000010", //
        "010000010", //
        "000000000", //
        "000000000", //
    },
    // o
    {
        "000000000", //
        "000000000", //
        "000111000", //
        "001000100", //
        "010000010", //
        "010000010", //
        "001000100", //
        "000111000", //
        "000000000", //
        "000000000", //
    },
    // p
    {
        "000000000", //
        "000000000",
        "011111100", //
        "010000010", //
        "010000010", //
        "010000010", //
        "011111100", //
        "010000000", //
        "010000000", //
        "010000000", //

    },
    // q
    {
        "000000000", //
        "000000000", //
        "001111110", //
        "010000010", //
        "010000010", //
        "010000010", //
        "001111110", //
        "000000010", //
        "000000010", //
        "000000010", //

    },
    // r
    {

        "000000000", //
        "000000000", //
        "001111100", //
        "010000010", //
        "010000000", //
        "010000000", //
        "010000000", //
        "010000000", //
        "000000000", //
        "000000000", //
    },
    // s
    {

        "000000000", //
        "000000000", //
        "001111100", //
        "010000010", //
        "010000000", //
        "000111110", //
        "000000010", //
        "010000010", //
        "001111100", //
        "000000000", //
    },
    // t
    {

        "000000000", //
        "000010000", //
        "001111100", //
        "000010000", //
        "000010000", //
        "000010000", //
        "000010100", //
        "000011000", //
        "000000000", //
        "000000000", //
    },
    // u
    {

        "000000000", //
        "000000000", //
        "010000010", //
        "010000010", //
        "010000010", //
        "010000010", //
        "010000010", //
        "001111100", //
        "000000000", //
        "000000000", //
    },
    // v
    {

        "000000000", //
        "000000000", //
        "001000100", //
        "001000100", //
        "000101000", //
        "000101000", //
        "000101000", //
        "000010000", //
        "000000000", //
        "000000000", //
    },
    // w
    {
        "000000000", //
        "000000000", //
        "010000010", //
        "010000010", //
        "010010010", //
        "010010010", //
        "010010010", //
        "001000100", //
        "000000000", //
        "000000000", //
    },
    // x
    {
        "000000000", //
        "000000000", //
        "001000100", //
        "000101000", //
        "000010000", //
        "000101000", //
        "001000100", //
        "000000000", //
        "000000000", //
        "000000000", //
    },
    // x
    {
        "000000000", //
        "000000000", //
        "001000100", //
        "000101000", //
        "000010000", //
        "000010000", //
        "000010000", //
        "000010000", //
        "000000000", //
        "000000000", //
    },
    // z
    {
        "000000000", //
        "000000000", //
        "011111100", //
        "000001000", //
        "000010000", //
        "000100000", //
        "001000000", //
        "011111100", //
        "000000000", //
        "000000000", //
    }
    //结束
};

void PrintLine(char c, int line) { //打印哪个字符
    //在第几个位置
    //第几行
    int n = c - 'a';
    char* p = CC[n][line];
    while (*p) {
        if (*p == '0')
            putchar(' ');
        else
            putchar('*');
        p++;
    }
}
void Print(char* s) {
    int size = strlen(s); //求出几个单词
    int i;
    int line;

    //共画10行
    for (line = 0; line < 10; line++) {
        for (i = 0; i < size; i++) {
            PrintLine(s[i], line);
        }
        puts(""); //换行
    }
}
int main() {
    char s[26] = "hijklmnopqtuvwxyz";
    // gets(s);
    Print(s);

    char s1[26] = "nopqrstuvwxyz";
    // gets(s);
    Print(s1);

    char s2[26] = "nopqrstuvwxyz";
    gets(s2);
    Print(s2);
    return 0;
}