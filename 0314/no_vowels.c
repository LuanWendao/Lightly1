#include <stdio.h>
int main() {
    char c;
    while (scanf("%c", &c) == 1) {
        if (c == 'a' || c == 'A')
            continue;
        if (c == 'e' || c == 'E')
            continue;
        if (c == 'i' || c == 'I')
            continue;
        if (c == 'o' || c == 'O')
            continue;
        if (c == 'u' || c == 'U')
            continue;
        printf("%c", c);
    }
    return 0;
}