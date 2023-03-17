#include <stdio.h>

int main() {
    int student_ids[] = {1001, 1002, 1003, 1004, 1005};
    int n = sizeof(student_ids) / sizeof(int);
    int search_id, i, index = -1;
    while (1) {
        printf("请输入要查找的学号输入 -1结束程序：");
        scanf("%d", &search_id);
        if (search_id == -1)
            break;
        for (i = 0; i < n; i++) {
            if (student_ids[i] == search_id) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            printf("学号%d不存在，代表没有录取\n", search_id);
        } else {
            printf("学号%d存在，下标为%d，代表已经录取\n", search_id, index);
        }
    }
    return 0;
}