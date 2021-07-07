#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
    printf("số bạn nhập vào đã bị hoán đổi: %d %d",*x,*y);
}

int main(){
    int a,b;
    printf("mời bạn nhập số a: ");
    scanf("%d",&a);
    printf("mời bạn nhập số b: ");
    scanf("%d",&b);
    swap(&a,&b);
    return 0;
}