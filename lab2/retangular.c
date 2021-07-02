#include <stdio.h>

int main(){
    printf("chào mừng đến với chương trình tính diện tích và chu vi hình chữ nhật\n");
    printf("xin mời nhập Chiều rộng: ");
    double CR = 0;
    scanf("%lf",&CR);
    printf("xin mời nhập Chiều dài: ");
    double CD = 0;
    scanf("%lf",&CD);
    double CV = (CD + CR)*2;
    double DT = CD*CR;
    printf("Chu Vi hình chữ nhật là: %.2lf \n", CV);
    printf("Diện tích hình chữ nhật là: %.2lf", DT);
    return 0;
}