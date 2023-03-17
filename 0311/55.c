#include <stdio.h>
int main() {
    int i, num, j, flag;
    for (i = 100; i <= 200; i++) {
        num = i;
        flag = 1;
        for (j = 2; j < num; j++) {
            if (num % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d ", num);
    }
    return 0;
}