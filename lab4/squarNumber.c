#include <stdio.h>

int main(){
    int x = 0;
    int count = 0;
    printf("mời bạn nhập số bất kỳ: ");
    scanf("%d",&x);
    for(int i = 1; i <= x; i++){
        if (i*i == x){
            count++;
            break;
        }
    }
    if (count == 1)
    {
        printf("số bạn nhập vào là số chính phương");
    }
    else{
        printf("số bạn nhập vào không phải là số chính phương");
    }
    
    return 0;
}