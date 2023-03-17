#include <conio.h>//getch函数要用，
#include <stdio.h>

int main() {
    int operatorCnt = 0;//统计 运算符的个数
    int a = 0, b = 0;//两个操作数
    char c, cc, *p;
    while (1) {
        c = getch();
        if (c == '=' || c == '\r') {//遇等号与换行退出循环
            break;
        }

        if (c == '+' || c == '-' || c == '*' || c == '/') {//如果是运算符
            cc = c;
            putchar(c);
            operatorCnt += 1;//个数+1
            if (operatorCnt >= 2) {//超1个直接提示
                puts("Multiple operators appear~!");
                break;//结束循环
            }
            continue;//回到循环头
        }

        if (c >= '0' && c <= '9') {
            putchar(c);
            if (operatorCnt == 0) {//处理第一个操作数
                a = a * 10 + c - '0';
            } else if (operatorCnt == 1) {
                b = b * 10 + c - '0';//处理第二个操作数
            }
        }
    }

    puts("");
    if (operatorCnt == 0)//没有进行运算直接输出a
        printf("res=%d\n", a);
    else {
        //根据运算符进行 求结果
        switch (cc) {
        case '+':
            printf("res=%d\n", a + b);
            break;
        case '-':
            printf("res=%d\n", a - b);
            break;
        case '*':
            printf("res=%d\n", a * b);
            break;
        case '/':
            if (b == 0) {//除数不可以为0
                puts("0 cannot be divided");
            } else
                printf("res=%.2f\n", 1.0 * a / b);
            break;
        }
    }
    return 0;
}