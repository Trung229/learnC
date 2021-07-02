#include <stdio.h>

int main(){
    int A = 0,B=0,C=0;
    printf("chào mừng đến với chương trình tìm cạnh tam giác\n");
    printf("mời bạn nhập điểm A : ");
    scanf("%d", &A);
    printf("mời bạn nhập điểm B : ");
    scanf("%d", &B);
    printf("mời bạn nhập điểm C : ");
    scanf("%d", &C);
    if(A + B > C || B + A > C || B + C > A){
        if(A * A == B * B + C * C || B * B == C * C + A * A || C * C == B * B + A * A){
            // 3 , 4 ,5
            printf("tam giác vuông");
        }else if(A == B && A == C){
            //1,1,1
            printf("tam giác đều");
        }else if(A == B || A == C || B == C){
            printf("tam giác cân");
        }else if(A*A>B*B+C*C||B*B>A*A+C*C||C*C >A*A+B*B){
            printf("tam giác tù");
        }else{
            printf("tam giác nhọn");
        }
    }else{
        printf("không phải tam giác");
    }
    return 0;
}