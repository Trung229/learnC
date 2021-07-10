#include <stdio.h>

int main(){
     printf("chào mừng đến với chương trình tính tiền điện: \n");
        printf("đây là các bậc đang có sẵn của hệ thống: \n");
        printf("Bậc 1: 0-50 => 1.657 VND\n");
        printf("Bậc 2: 51-100 => 1.734 VND\n");
        printf("Bậc 3: 101-200 => 2.014 VND\n");
        printf("Bậc 4: 201-300 => 2.536 VND\n");
        printf("Bậc 5: 301-400 => 2.834 VND\n");
        printf("Bậc 6: 401 trở lên => 2.927 VND\n");
        printf("=============================================> xin mời nhập số tiêu thụ điện: ");
        double power = 0.00;
        double money;
        scanf("%lf", &power);
        if (power < 50){
            money = 50 * 1.657;
        }else if (power<=100){
            money = 50 * 1.657 + (power - 50)*1.734;
        }else if (power<200){
            money = 50 * 1.657 + 50*1.734 + (power - 100)*2.014;
        }else if(power<300){
            money = 50 * 1.657 + 50 * 1.734 + 100 * 2.014 + (power - 200)*2.536;
        }else if (power < 400){
            money = 50 * 1.657 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (power - 300)*2.834;
        }else{
            money = 50 * 1.657 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100*2.834 + (power - 400)*2.927;
        }
        printf("bạn phải đóng %lf VND tiền điện\n", money);
    return 0;
}