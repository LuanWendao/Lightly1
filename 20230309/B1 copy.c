#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fun(char* s, char* t) {
    char *p = s, *q, *q1;
    int flag = 0;
    while (*p) {
        q = p;
        q1 = t;
        while (*q1 && *q && *q == *q1)
            q1++, q++;

        if (*q1 == 0) {
            flag = 1;
            q = p + strlen(t);

            //删除
            do
                *(q - strlen(t)) = *q, q++;
            while (*q);
            *(q - strlen(t)) = 0;

            continue;
        }
        p++;
    }
    if (flag)
        fun(s, t);
}

int main() {
    char buf[1024], t[1024];
    gets(buf);
    gets(t);
    fun(buf, t);
    puts(buf);
    return 0;
}