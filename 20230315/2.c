
#include <stdio.h>
int main() {
    int i, j;
    int n = 3;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 2 * i + 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}