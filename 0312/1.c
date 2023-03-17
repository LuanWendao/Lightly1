#include <stdio.h>

int main() {
    int money;
    float discount;
    scanf("%d", &money);
    if (money < 300) {
        discount = 1.0;
        printf("不打折，付款%d", money);
    } else if (money < 500) {
        discount = 0.9;
        printf("打9折，付款%d", (int)(money * discount));
    } else {
        discount = 0.7;
        printf("打7折，付款%d", (int)(money * discount));
    }
    return 0;
}