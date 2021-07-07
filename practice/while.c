#include <stdio.h>

int main(){
    int seri;
    int check = 0;
    do
    {
        printf("xin moi ban nhap so seri: ");
        scanf("%d",&seri);
        if (seri == 123)
        {
            printf("ban da nap tien thanh cong \n");
            break;
        }else{
            printf("ban nhap sai so seri \n");
            check++;
        }
        
    } while (check <= 3);
    if(check > 3){
        printf("tai khoan cua ban bi khoa tam thoi");
    }else{
        printf("xin chao va hen gap lai");
    }
    
    return 0;
}