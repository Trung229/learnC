#include <stdio.h>

int main(){
    int x =1;
    int i=1;
    int count = 0;
    printf("xin moi ban nhap so ngau nhien: ");
    scanf("%d",&x);
    while(i <= x){
        if(x%i == 0){
            count++;
        }
        i++;
    }
    if(count==2){
        printf("số bạn nhập là số nguyên tố");
    }else{
        printf("số bạn nhập không phải là số nguyên tố");
    }
    
    return 0;
}