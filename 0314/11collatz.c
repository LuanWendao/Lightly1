#include <stdio.h>
#include <string.h>
int main() {
    char s[1024];

    while (gets(s) != 0) {

        if (strlen(s) % 2 == 1)
            puts(s);
    }

    return 0;
}
