#include <stdio.h>

void cntAEIOU(char* s) {
    int cnt[26] = {0}, i;
    while (*s) {
        if (*s >= 'A' && *s <= 'Z')
            *s += 32;

        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
            cnt[*s - 'a'] += 1;
        s++;
    }
    printf("a:");
    for (i = 0; i < cnt['a' - 'a']; i++)
        putchar('*');
    puts("");

    printf("e:");
    for (i = 0; i < cnt['e' - 'a']; i++)
        putchar('*');
    puts("");

    printf("i:");
    for (i = 0; i < cnt['i' - 'a']; i++)
        putchar('*');
    puts("");

    printf("o:");
    for (i = 0; i < cnt['o' - 'a']; i++)
        putchar('*');
    puts("");

    printf("u:");
    for (i = 0; i < cnt['u' - 'a']; i++)
        putchar('*');
    puts("");
}

int main() {
    char s[10000], c;
    int i;
    FILE* fp;
    gets(s);
    cntAEIOU(s);

    fp = fopen("A9.txt", "r");
    if (fp == NULL) {
        puts("Open the file A9.txt error");
        return -1;
    }
    i = 0;
    while ((c = fgetc(fp)) != EOF) {
        s[i++] = c;
    }
    s[i] = '\0';
    fclose(fp);
    puts("A9.txt the aeiou total:");
    cntAEIOU(s);
    return 0;
}