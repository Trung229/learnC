#include <stdio.h>

void main(){
    printf("%d\n",1<0 || 3>2 || 6 == 1);
    printf("xin moi nhap diem: \n");
    double diem = 0;
    scanf("%lf", &diem);
    if(diem >= 9){
        printf("xuat sac");
    }else if(8<=diem && diem<=9){
        printf("Gioi");
    }else if(7<=diem && diem<=8){
        printf("Kha");
    }else if(5<=diem && diem<=7){
        printf("TB");
    }else{
        printf("Yeu");
    }
}