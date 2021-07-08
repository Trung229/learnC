#include <stdio.h>

int main(){
  int n=0;
  printf("xin mời nhập số phần tử trong mảng bạn muốn ");
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
      printf("mời bạn nhập phần tử tại vị trí arr[%d]\n",i);
      scanf("%d",&arr[i]);
  }
  printf("bạn có muốn xuất ra dữ liệu chứ nhập 1 để xác nhận và nhập 0 để hủy\n");
  int check =0;
  scanf("%d",&check);
  if (check == 1)
  {
      for(int i=0; i<n;i++){
          printf("phần tử trong mảng %d",arr[i]);
      }
  }
  else{
      printf("cảm ơn bạn đã sử dụng chương trình");
  }
  
  
  
    return 0;
}