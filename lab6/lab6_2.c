#include <stdio.h>

int main(){
     int n;
    printf("mời bạn nhập số phần tử mảng: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("mời bạn nhập phần tử tại vị trí arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
       for(int j=i+1; j<n; j++){
           if(arr[i]>arr[j]){
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] =temp;
           }
       }
    }
    printf("giá trị lớn nhất là : %d\n", arr[n-1]);
    printf("giá trị nhỏ nhất là : %d\n", arr[0]);
    return 0;
}