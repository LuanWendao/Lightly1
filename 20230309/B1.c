#include <stdio.h>
#include <stdlib.h>
int main() {
    int*   const p = (int*)malloc(sizeof(int) * 10);
    int i;
    
    for (i = 0; i < 9; i++)
        scanf("%d", p + i);

    for (i = 0; i < 9; i++)
        printf("%d ", p[i]);
    free(p);
    return 0;
}