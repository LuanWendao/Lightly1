#include <stdio.h>
int main() {
    double sum = 0;
    int i;
    for (i = 1; i <= 100; i++) {
        sum += 1.0 / i;
    }
    printf("%f", sum);
    return 0;
}