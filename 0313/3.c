#include <stdio.h>

int main() {
    int n;
    int o, j, size, tmp;
    char s[20];
    scanf("%d", &n);
    while (n != 123) {
        tmp = n;
        size = 0; //统计数值的长度
        o = 0;    //偶数的个数
        j = 0;    //奇数的个数
        while (tmp) {
            if (tmp % 2 == 0)
                o += 1;
            else
                j += 1;

            tmp /= 10;
            size += 1;
        }
        sprintf(s, "%d%d%d", o, j, size); //三个变量拼成字符串
        sscanf(s, "%d", &n);              //字符串转为整数
        printf("%d\n", n);                //显示新值
    }
    return 0;
}
// 14741029