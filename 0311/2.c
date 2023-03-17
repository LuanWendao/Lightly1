#include <stdio.h>
int main() {
    // double类型变量值的输入
    //  占位符应当是%lf 经常 会把 l忘了
        
    double d_a, d_b;

    scanf("%f", &d_a);//此处就会录失败
    scanf("%lf", &d_b);
    printf("%f  %f", d_a, d_b);

    return 0;
}