#include <stdio.h>

void main(){
    printf("chào mừng đến với chương trình cộng 2 số\n");
    printf("mời nhập số A : ");
    int a = 0;
    scanf("%d", &a);
    printf("mời nhập số B : ");
    int b = 0;
    scanf("%d", &b);
    int c = a + b;
    printf("tổng phép tính của bạn là: %d\n", c);
    c = a - b;
    printf("hiệu phép tính của bạn là: %d\n", c);
    c = a * b;
    printf("tích phép tính của bạn là: %d\n", c);
    c = a / b;
    printf("thương phép tính của bạn là: %d\n", c);
}