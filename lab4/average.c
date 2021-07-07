#include <stdio.h>

int main(){
    int min = 0, max = 0;
    int i = 0;
    float diem = 0;
    int count = 0;
    float avarage = 0;
    int sum = 0;
    printf("xin moi ban nhap min: ");
    scanf("%d",&min);
    printf("xin moi ban nhap max: ");
    scanf("%d",&max);
    while(min <= max){
        if(min%2 ==0){
            count++;
            sum+=min;
        }
        min++;
    }
    avarage = sum/count;
    printf("trung binh cong cac so chia het cho 2 la %.2f", avarage);
    return 0;
}