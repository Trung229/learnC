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
    float power = 0.00;
    scanf("%f", &power);
    if(power>0 && power<50){
        printf("tiền điện của bạn là : %.2f VND",30 * 1.657);
    }else if(power>51 && power<100){
        printf("tiền điện của bạn là : %.2f VND",30 * 1.734);
    }else if(power>101 && power<200){
        printf("tiền điện của bạn là : %.2f VND",30 * 2.014);
    }else if(power>201 && power<300){
        printf("tiền điện của bạn là : %.2f VND",30 * 2.536);
    }else if(power>301 && power<400){
        printf("tiền điện của bạn là : %.2f VND",30 * 2.834);
    }else{
        printf("tiền điện của bạn là : %.2f VND",30 *  2.927);
    }
    return 0;
}