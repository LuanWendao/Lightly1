#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Rand(int a, int b) {
    int max, min;
    max = a;
    min = b;
    if (a < b) {
        max = b;        min = a;
    }
    srand(time(0));
    return rand() % (max - min + 1) + min;
}
void swap(int* a, int* b) {
    int c;
    c = *a;    *a = *b;    *b = c;
}
int main() {
    char t1; //+-*
    int Yes = 0;
    int i, res, res1;
    int a, b;

    printf("select + - *:");
    t1 = getchar();
    for (i = 0; i < 10; i++) {
        a = Rand(10, 99);
        b = Rand(10, 99);
        if (t1 == '+') {
            printf("%2d + %2d = ", a, b);
            scanf("%d", &res);
            res1 = a + b;
        } else if (t1 == '-') {
            if (a < b)
                swap(&a, &b);

            printf("%2d - %2d = ", a, b);
            scanf("%2d", &res);
            res1 = a - b;
        } else { // *
            a /= 10;
            b /= 10;
            printf("%2d * %2d = ", a, b);
            scanf("%2d", &res);
            res1 = a * b;
        }
        if (res == res1) {
            puts("OK");
            Yes += 1;
        } else {
            printf("ERROR,res=%2d\n", res1);
        }
    }
    printf("\n\t\t\tscore = %2d\n", Yes * 10);
    return 0;
}