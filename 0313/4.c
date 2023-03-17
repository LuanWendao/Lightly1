#include <stdio.h>

int fun(int n) {
    int nums[10] = {0};
    int max = 0, min = 0;
    int i, j;

    while (n) {
        //统计0~9每个数字出现的次数
        nums[n % 10] += 1;
        n /= 10;
    }

    for (i = 9; i >= 0; i--)
        for (j = 0; j < nums[i]; j++)
            max = max * 10 + i;

    for (i = 0; i < 10; i++)
        for (j = 0; j < nums[i]; j++)
            min = min * 10 + i;

    printf("%d - %d = %d \n", max, min, max - min);
    return max - min;
}
int main() {
    int n;
    printf("输入一个四位数字不能是1111 2222这类的:");
    scanf("%d", &n);
    n = fun(n);
    while (n != 6174)
        n = fun(n);
    return 0;
}
// 5200