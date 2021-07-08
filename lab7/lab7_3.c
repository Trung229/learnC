#include <stdio.h>
#include <string.h>


int main(){
    char arr[5][20];
    char t[20];
    int count = 0;
    for(int i=0; i< 5; i++){
        printf("mời bạn nhập ký tự bất kỳ ");
        scanf("%s",arr[i]);
    }
    for(int i=0; i<5; i++){
        for(int j=i+1; j< 5; j++){
            if(strlen(arr[i])>strlen(arr[j])){
                strcpy(t,arr[j]);
                strcpy(arr[j],arr[i]);
                strcpy(arr[i],t);
            }
        }
    }
    for(int i=0; i < 5; i++){
        printf("\n%s",arr[i]);
    }
    return 0;
}