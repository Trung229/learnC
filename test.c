#include <stdio.h>

int main(){
    char name;
    printf("mời bạn nhập tên: ");
    gets(name);
    printf("Hello %s", name);
    return 0;
}