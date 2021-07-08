#include <stdio.h>
#include <string.h>

int main(){
    char userSys[] = "admin";
    char passwordSys[] = "123";
    char name[10];
    char password[10];
    START:printf("mời bạn nhập tên đăng nhập ");
    gets(name);
    printf("mời bạn nhập mật khẩu ");
    gets(password);
    if(strcmp(name,userSys) == 0 && strcmp(password,passwordSys) == 0){
        printf("bạn đã đăng nhập vào hệ thống thành công");
    }else{
        printf("bạn đã đăng nhập thất bại\n");
        goto START;
    }
    return 0;
}