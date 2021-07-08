#include <stdio.h>
#include <string.h>

int main(){
   char userSys[10] = "admin";
   char passwordSys[10] = "123";
   char name[10];
   char password[10];
   printf("mời bạn nhập tên đăng nhập: ");
   gets(name);
   printf("mời bạn nhập tên mật khẩu: ");
   gets(password);

   if(strcmp(name,userSys) == 0 && strcmp(password,passwordSys) == 0){
       printf("xin chào %s", name);
   }else{
       printf("Who the fuck are you? ");
   }
}