#include <stdio.h>

int main(){
    float A=0, B=0;
    float C = 0;
    printf("chào mừng đến với chương trình tính hàm bậc nhất:\n");
    printf("mời bạn nhập số A: ");
    scanf("%f",&A);
    printf("mời bạn nhập số B: ");
    scanf("%f",&B);
    if(A == 0){
        if(B == 0){
            printf("phương trình vô số nghiệm");
        }else{
            printf("phương trình vô nghiệm");
        }
    }else{
        printf("phương trình có kết quả là %g",-B/A);
    }
    return 0;
}