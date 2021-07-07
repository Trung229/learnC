#include <stdio.h>
#include <stdbool.h>

bool checkYear(int year) {
    if(year % 400 == 0){
        return true;
    }else if(year % 4 == 0 && year % 100 !=0){
        return false;
    }
    return false;
}

int main(){
    int year = 0;
    printf("mời bạn nhập vào số năm: ");
    scanf("%d",&year);
    bool check = checkYear(year);
    if (check == true)
    {
        printf("năm bạn nhập vào là năm nhuận");
    }
    else{
        printf("năm bạn nhập vào không phải là năm nhuận");
    }
    
    return 0;
}