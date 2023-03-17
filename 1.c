#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printf("%p\n", a );
    printf("%p\n", a + 1);
    printf("%p\n", &a[1]);

    return 0;
}