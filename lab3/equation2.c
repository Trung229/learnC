#include <stdio.h>
#include <math.h>
int main(){
    float A=0, B=0, C=0;
    printf("xin chào đến với chương trình tìm căn bậc 2\n");
    printf("xin mời nhập số A: ");
    scanf("%f",&A);
    printf("xin mời nhập số B: ");
    scanf("%f",&B);
    printf("xin mời nhập số C: ");
    scanf("%f",&C);
    if(A==0){
        if(B==0){
            printf("phương trình vô số nghiệm");
        }else{
            printf("phương trình có nghiệm x=%f", -C/B);
        }
    }else{
        float DELTA = B * B + 4*A*C;
        if(DELTA<0){
            printf("phương trình vô nghiệm");
        }else if(DELTA == 0){
            printf("phương trình có nghiệm kép là x=%f",-B/2*A);
        }else{
            printf("phương trình có 2 nghiệm riêng phân biệt: \n");
            printf("nghiệm 1 X1=%f",(float)((-B + sqrt(DELTA)) / (2*A)));
            printf("nghiệm 1 X2=%f",(float)((-B - sqrt(DELTA)) / (2*A)));
        }
    }
    return 0;
}