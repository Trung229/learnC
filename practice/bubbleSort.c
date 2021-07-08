#include <stdio.h>

int main(){
    int n;
    printf("mời bạn nhập số phần tử của mảng: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("mời bạn nhập số phần tử trong mảng a[%d]",i);
        scanf("%d",&arr[i]);
    }
    //bubble sort
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("phần tử trong mảng %d\n", arr[i]);
    }
    return 0;
}