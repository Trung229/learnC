#include <stdio.h>

int main()
{
    int value = 0;
    while (value != 4)
    {
        printf("chào mừng bạn đến lab 4 \n");
        printf("1. Tính số trung bình cộng các số chia hết cho 2\n");
        printf("2. Tìm số nguyên tố\n");
        printf("3. Tìm số chính phương\n");
        printf("4. Thoát\n");
        printf("mời bạn chọn chức năng ");
        scanf("%d", &value);
        switch (value)
        {
        case 1:
            printf("bạn đã chọn dịch vụ Tính số trung bình cộng các số chia hết cho 2 \n");
            int min = 0, max = 0;
            int i = 0;
            float diem = 0;
            int count = 0;
            float avarage = 0;
            int sum = 0;
            printf("xin moi ban nhap min: ");
            scanf("%d", &min);
            printf("xin moi ban nhap max: ");
            scanf("%d", &max);
            while (min <= max)
            {
                if (min % 2 == 0)
                {
                    count++;
                    sum += min;
                }
                min++;
            }
            avarage = sum / count;
            printf("trung binh cong cac so chia het cho 2 la %.2f\n", avarage);
            continue;
        case 2:
            printf("bạn đã chọn dịch vụ tìm số nguyên tố \n");
            int x = 1;
            int i2 = 1;
            int count2 = 0;
            printf("xin moi ban nhap so ngau nhien: ");
            scanf("%d", &x);
            while (i2 <= x)
            {
                if (x % i2 == 0)
                {
                    count2++;
                }
                i2++;
            }
            if (count2 == 2)
            {
                printf("số bạn nhập là số nguyên tố");
            }
            else
            {
                printf("số bạn nhập không phải là số nguyên tố");
            }
            continue;
        case 3:
            printf("bạn đã chọn dịch vụ tìm số chính phương \n");
            int x3 = 0;
            int count3 = 0;
            printf("mời bạn nhập số bất kỳ: ");
            scanf("%d", &x3);
            for (int i = 1; i <= x3; i++)
            {
                if (i * i == x3)
                {
                    count3++;
                    break;
                }
            }
            if (count3 == 1)
            {
                printf("số bạn nhập vào là số chính phương\n");
            }
            else
            {
                printf("số bạn nhập vào không phải là số chính phương\n");
            }

            continue;
            default: printf("chúng tôi không có dịch vụ mà bạn yêu cầu\n");
            continue;
        }
        
        
        return 0;
    }
}