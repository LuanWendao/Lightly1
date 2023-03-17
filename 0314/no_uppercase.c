#include <stdio.h>
int main() {
    int i, j, row;
    printf("请输入要打印的行数：");
    scanf("%d", &row);
    for (i = 0; i < row; i++) {
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}