#include <stdio.h>

int findMax(int a, int b, int c) {
    int max =0;
    if (a > b && a > c){
        max = a;
    }else if (b > a && b > c){
        max = b;
    }else{
        max = c;
    }
    return max;
}

int main(){
    int a,b,c;
    printf("mời bạn nhập số a: ");
    scanf("%d",&a);
    printf("mời bạn nhập số b: ");
    scanf("%d",&b);
    printf("mời bạn nhập số c: ");
    scanf("%d",&c);
    int final = 0;
    final = findMax(a,b,c);
    printf("số lớn nhất là : %d\n", final);
    return 0;
}