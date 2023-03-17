/*-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
-- -- -- -- -- -- -- -- -- 【程序设计】-- -- -- -- -- -- -- -- -- -- -- -- -- --
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

                                                                                                       题目：程序将字符串开始和末尾的连续空格删除，同时将字符串中间的多个空格
                                                                                                           删减只剩1个空格。
                                                                                                               程序运行结果如样张所示。

                                                                                                       -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --注意：请勿改动程序中的其他内容。-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getnewstr(char a[]) {
    int isbegin, front, back;
    isbegin = 1;
    front = 0;
    back = 0;

    /**********Program**********/


    while (a[front]) {
        if (isbegin == 1 && a[front] == ' ') {
            back = front;
            while (a[back])
                a[back] = a[back + 1], back += 1;
            if (a[front] != ' ')
                isbegin = 0;
            continue;
        } else if (isbegin == 0 && a[front] == ' ')
            isbegin = 1;

        front++;
    }

    /**********  End  **********/

    
    if (a[front - 1] == ' ')
        --front;
    a[front] = '\0';
}
int main() {
    char a[] = "   hello    how      are you    ";
    printf("\"%s\"\n", a);
    getnewstr(a);
    printf("\"%s\"\n", a);
    return 0;
}