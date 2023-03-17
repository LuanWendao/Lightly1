#include <stdio.h>
void fun(int n) {
    int i = 0;
    int a[10][7] = {{1, 1, 1, 0, 1, 1, 1}, {0, 1, 0, 0, 1},
                    {1, 0, 1, 1, 1, 0, 1}, {1, 0, 1, 1, 0, 1, 1},
                    {0, 1, 1, 1, 0, 6},    {1, 2, 0, 4, 0, 6, 7},
                    {1, 1, 0, 1, 1, 1, 1}, {1, 0, 3, 0, 0, 6},
                    {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};

    if (a[n][0])
        puts("AAAAAAAA");
    if (a[n][1] && a[n][2]) {
        puts("A      A");
        puts("A      A");
        puts("A      A");
    } else if (a[n][1]) {
        puts("A");
        puts("A");
        puts("A");
    } else if (a[n][2]) {
        puts("       A");
        puts("       A");
        puts("       A");
    }
    if (a[n][3])
        puts("AAAAAAAA");
    else
        puts("");

    if (a[n][4] && a[n][5]) {
        puts("A      A");
        puts("A      A");
        puts("A      A");
    } else if (a[n][4]) {
        puts("A");
        puts("A");
        puts("A");
    } else if (a[n][5]) {
        puts("       A");
        puts("       A");
        puts("       A");
    }

    if (a[n][6])
        puts("AAAAAAAA");
    puts("");
}
int main() {
    int i = 0;
    for (i = 0; i < 10; i++) {
        fun(i);
        puts("");
    }
    return 0;
}
