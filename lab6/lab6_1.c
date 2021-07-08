#include <stdio.h>

int main(){
    int n,m, count;
    printf("mời bạn nhập số phần tử mảng: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("mời bạn nhập phần tử tại vị trí arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<n; i++){
        if(arr[i] % 3==0){
            count++;
            m+=arr[i];
        }
    }
    printf("m là %d", m/count);

    return 0;
}