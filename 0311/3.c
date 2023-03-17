#include <stdio.h>
int main() {
    //生活中的现象为例
    //输入小时，转为多少分钟
    int hour;
    int minute;
    scanf("%d", &hour);
    minute = hour * 60;
    printf("minute=%d", minute);
    return 0;
}