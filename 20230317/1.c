#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>   

double Random(double a, double b) {
    double x;
    a /= 0.095;
    b /= 0.095;
    double max, min;
    max = a;
    min = b;
    if (a < b) {
        max = b;
        min = a;
    }
    max *= 100;
    min *= 100;

    x = rand() % (int)(max - min + 1) + (int)min;
    return x;
}

void Fun(double aa, double bb) {
    double a, b, c;
    double avg;
    a = Random(aa, bb);
    b = Random(aa, bb);
    c = Random(aa, bb);
    avg = (a + b + c) / 300.0 * 0.095;
    printf("%-7.2f %-7.2f %-7.2f %-7.2f \n", a / 100, b / 100, c / 100, avg);
}
int main() {
    // 使用当前时间作为随机数生成器的种子
    char buf[100];
    int day;

    srand(time(NULL));
    puts("C30 35 40 45 50,day 7  28\n");
    while (1) {

        printf("格式如: C30 7:");
        scanf("%s%d", buf, &day);
        if (day == 7) {
            if (strcmp(buf, "C30") == 0 || strcmp(buf, "c30") == 0) {
                Fun(24, 27);
            } else if (strcmp(buf, "C35") == 0 || strcmp(buf, "c35") == 0) {
                Fun(28, 31.5);
            } else if (strcmp(buf, "C40") == 0 || strcmp(buf, "c40") == 0) {
                Fun(32, 36);
            } else if (strcmp(buf, "C45") == 0 || strcmp(buf, "c45") == 0) {
                Fun(36, 40.5);
            } else if (strcmp(buf, "C50") == 0 || strcmp(buf, "c50") == 0) {
                Fun(40, 45);
            } else {
                printf("没有此项%s %d\n", buf, day);
            }

        } else if (day == 28) {
            if (strcmp(buf, "C30") == 0 || strcmp(buf, "c30") == 0) {
                Fun(34.5, 36);
            } else if (strcmp(buf, "C35") == 0 || strcmp(buf, "c35") == 0) {
                Fun(40.25, 42);
            } else if (strcmp(buf, "C40") == 0 || strcmp(buf, "c40") == 0) {
                Fun(46, 48);
            } else if (strcmp(buf, "C45") == 0 || strcmp(buf, "c45") == 0) {
                Fun(51.75, 54);
            } else if (strcmp(buf, "C50") == 0 || strcmp(buf, "c50") == 0) {
                Fun(57.5, 60);
            } else {
                printf("没有此项%s %d\n", buf, day);
            }
        } else {
            printf("没有此项%s\n", buf);
        }
    }

    return 0;
}