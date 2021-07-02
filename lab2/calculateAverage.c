#include <stdio.h>

int main(){
    printf("xin moi ban nhap diem Toan: \n");
    double toan = 0;
    scanf("%lf", &toan);
    printf("xin moi ban nhap diem Ly: \n");
    double Ly = 0;
    scanf("%lf", &Ly);
    printf("xin moi ban nhap diem Hoa: \n");
    double Hoa = 0;
    scanf("%lf", &Hoa);
    double dtb = (toan * 3 + Ly * 2 + Hoa) / 6;

    printf("diem trung binh cua ban la : %.2lf\n", dtb);
    if(dtb > 5){
        printf("Bạn đã đạt yêu cầu");
    }
    else{
        printf("Bạn không đạt yêu cầu");
    }
    return 0;
}