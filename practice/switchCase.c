#include <stdio.h>

int main(){
   printf("1 + 1 = ?\n");
   printf("a.1\nb.2\nc.3\nd.4");
   printf("xin mời bạn nhập đáp án a,b,c,d\t");
   char answer;
   scanf("%s", &answer);
   switch (answer){
       case 'a':printf("bạn đã chọn sai");
       break;
       case 'b':printf("bạn đã chọn đúng");
       break;
       case 'c':printf("bạn đã chọn sai");
       break;
       case 'd':printf("bạn đã chọn sai");
       break;
       default:printf("bạn nhập bậy");    
   }
}