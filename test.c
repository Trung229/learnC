#include <stdio.h>

int main(){
    char name[20];
    char idStudent[10];
    char email[20];
    int phone;
    char address[100];
    printf("mời bạn nhập tên: ");
    gets(name);
    fflush(stdin);
    printf("mời bạn nhập MSSV: ");
    gets(idStudent);
    printf("mời bạn nhập email: ");
    gets(email);
    printf("mời bạn nhập phone: ");
    scanf("%d",&phone);
    fflush(stdin);
    printf("mời bạn nhập địa chỉ: ");
    gets(address);
    printf("\nHello %s \n", name);
    printf("thông tin của bạn là\n");
    printf("Name: %s\n", name);
    printf("ID: %s\n", idStudent);
    printf("Phone: %d\n", phone);
    printf("Address: %s\n", address);
    return 0;
}