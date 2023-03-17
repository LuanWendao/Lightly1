#include <stdio.h>
#include <time.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>


#define N 50000

int isPrime(int n) {
    //分析从2到 n-1是否有能整除n的情况，如果有，说明不是素数
    //如果没有，说明是素数
    //不是素数返回0，是素数返回1
    int i;
    if (n < 2) //小于2直接不是素数
        return 0;

    for (i = 2; i < n; i++)
        if (n % i == 0) //有整除情况不是素数
            return 0;

    return 1; //能到这步说明是素数
}
void test() {
    long long sum = 0;
    int i;
    for (i = 1; i <= N; i++) {
        //分析i是否是素数
        if (isPrime(i) == 1) {
            //如果是打印，并统计+1
            printf("%d ", i);
            sum += 1;
        }
    }
    printf("素数的个数是:%lld\n", sum);
    puts("");
}
int main() {

    char t='\';

    clock_t start, end;

    double s;

    start = clock();
    test();
    end = clock();
    s = (double)(end - start) / CLOCKS_PER_SEC * 1000;
    printf("%f millisecond\n", s);
    return 0;
}