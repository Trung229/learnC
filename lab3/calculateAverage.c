#include <stdio.h>

int main(){
    printf("xin mời nhập điểm từ 0-10: ");
    double score = 0.000;
    scanf("%lf",&score);
    if(score>= 9 && score<= 10){
        printf("hoc sinh xuat sac");
    }else if(score>=8 && score<=9){
        printf("hoc sinh gioi");
    }else if(score>6.5 && score<8){
        printf("hoc sinh kha");
    }else if(score>5 && score<6.5){
        printf("hoc sinh tb");
    }else if(score>3.5 && score<5){
        printf("hoc sinh yeu");
    }else if(score>0 && score<3.5){
        printf("hoc sinh kem");
    }else{
        printf("%d ban nhap khong dung diem trong khoang cho phep: ", (int)score);
    }
    return 0;
}