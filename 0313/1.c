#include <stdio.h>
#include <time.h>
int main() {
    clock_t start;//起始变量
    clock_t end;//结束变量
    double duration;//时间差 持续时间
    start = clock();  // 记录起始时间
    for (int i = 0; i <= 500000; i++) {
        // 待计算的操作
    }
    end = clock();  // 记录结束时间
    duration = (double)(end - start) / CLOCKS_PER_SEC * 1000;  // 计算时间差并转换为毫秒
    printf("for循环从0到500000所花费的时间毫秒是:");
    printf("%.0f\n",duration);
    return 0;
}