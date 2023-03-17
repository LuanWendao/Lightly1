#include <stdio.h>
int main() {
    //求两个数中的最大值
    //改为求两个数的最小值

    int a, b;
    int res;

    scanf("%d%d", &a, &b);
    if (a > b)
        res = a;
    else
        res = b;
    printf("max=%d\n", res);

    //改后

    if (a < b)
        res = a;
    else
        res = b;
    printf("min=%d\n", res);

    return 0;
}