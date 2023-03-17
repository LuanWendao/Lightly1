#include <stdio.h>
int main() {
    int i;
    int n;
    int min;
    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (i == 0)
            min = n;
        else {
            if (min > n)
                min = n;
        }
    }
    printf("%d", min);
    return 0;
}