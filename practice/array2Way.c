#include <stdio.h>

int main(){
    int n,m;
    printf("mời bạn nhập số hàng ");
    scanf("%d",&n);
    printf("mời bạn nhập số cột ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0; i <n;i++){
        for(int j=0; j < m; j++){
            printf("mời bạn nhập giá trị tại a[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            printf("giá trị trong mảng đa chiều tại arr[%d][%d] %d\n",i,j,arr[i][j]);
        }
    }
    return 0;
}