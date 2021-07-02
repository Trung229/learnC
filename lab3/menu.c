#include <stdio.h>

int main(){
    printf("chào mừng đến với menu lab 3: \n");
    printf("1. dịch vụ tính điểm học sinh\n");
    printf("2. dịch vụ tìm hàm bậc nhất\n");
    printf("3. dịch vụ tìm hàm bậc hai\n");
    printf("4. dịch vụ tìm hàm tính tiền điện\n");
    printf("vui lòng chọn dịch vụ bạn muốn: ");
    int service = 0;
    scanf("%d",&service);
    switch(service){
        case 1: printf("bạn đã chọn dịch vụ tính điểm học sinh");
        break;
        case 2: printf("bạn đã chọn dịch vụ tìm hàm bậc nhất");
        break;
        case 3: printf("bạn đã chọn dịch vụ tìm hàm bậc hai");
        break;
        case 4: printf("bạn đã chọn dịch vụ tính tiền điện");
        break;
        default: printf("chúng tôi không có dịch vụ mà bạn yêu cầu");
    }

    return 0;
}