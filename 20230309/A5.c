#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 //执行多少题目

int main() {
    char type;     //类型
    int n1, n2;    //两个数字
    int cntOK = 0; //答对的个数
    int t, i, res;
    srand(time(0)); //随机种子，每次程序运行与上次打开产生的内容不一直
    puts("请选择题目类型 + - *");
    type = getchar();
    while (type != '+' && type != '-' && type != '*') {
        getchar(); //吃掉换行符
        puts("输入不合法,请选择题目类型 + - *");
        type = getchar();
    }

    puts("以下是10道题目:");
    for (i = 0; i < N; i++) {
        printf("第%d道题目:  ",i+1);
        switch (type) {
        case '+':
            //两个两位数字
            n1 = rand() % (99 - 10 + 1) + 10;
            n2 = rand() % (99 - 10 + 1) + 10;
            printf("%d + %d=", n1, n2);
            scanf("%d", &res);
            if (res == n1 + n2) {
                puts("回答正确");
                cntOK += 1;
            } else {
                printf("回答错误，正确答案应当是%d\n", n1 + n2);
            }
            break;
        case '-':
            //两个两位数字
            n1 = rand() % (99 - 10 + 1) + 10;
            n2 = rand() % (99 - 10 + 1) + 10;

            if (n1 < n2) {
                t = n1;
                n1 = n2;
                n2 = t;
            }

            printf("%d - %d=", n1, n2);
            scanf("%d", &res);
            if (res == n1 - n2) {
                puts("回答正确");
                cntOK += 1;
            } else {
                printf("回答错误，正确答案应当是%d\n", n1 - n2);
            }
            break;

        case '*':
            //两个1位数字
            n1 = rand() % (9 - 1 + 1) + 1;
            n2 = rand() % (9 - 1 + 1) + 1;
            printf("%d X %d=", n1, n2);
            scanf("%d", &res);
            if (res == n1 * n2) {
                puts("回答正确");
                cntOK += 1;
            } else {
                printf("回答错误，正确答案应当是%d\n", n1 * n2);
            }
            break;
        }
    }
    printf("\n最后得分:%d\n", cntOK * 10);
    
    puts("--End--");

    return 0;
}