#include <stdio.h>
#define PI 3.141592653589793;
void main(){
    printf("xin chào mừng bạn đến với chương trình tím chu vi va diện tích hình tròn : \n");
    double banKinh = 0;
    printf("xin moi ban nhap ban kinh ");
    scanf("%lf", &banKinh);
    double CV = 2*banKinh*PI;
    double DT = banKinh*banKinh*PI;

    printf("diện tích hình tròn là: %.2lf\n",DT);
    printf("Chu vi hình tròn là: %.2lf",CV);
}