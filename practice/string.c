#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    START:printf("mời bạn nhập tên ");
    gets(name);
    if(strlen(name) < 3){
        printf("này đéo có tên nào dưới 3 ký tự cả\n");
        goto START;
    }else{
        printf("hello %s",strcat(name,"@fpt.edu.vn"));
    }
}