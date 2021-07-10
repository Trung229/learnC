#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char name[100];
    double point;
    char standing[100];
};
struct fraction{
    int numerator;
    int denominator;
};
void checkPrime()
{
    char check[5] = "yes";
    do
    {
        int x = 1;
        int i = 1;
        int count = 0;
        int countSquare = 0;
        printf("xin moi ban nhap so ngau nhien: ");
        scanf("%d", &x);
        while (i <= x)
        {
            if (x % i == 0)
            {
                count++;
            }
            i++;
        }
        if (count == 2)
        {
            printf("số bạn nhập là số nguyên tố \n");
        }
        else
        {
            printf("số bạn nhập không phải là số nguyên tố \n");
        }
        for (int i = 1; i <= x; i++)
        {
            if (i * i == x)
            {
                countSquare++;
                break;
            }
        }
        if (countSquare == 1)
        {
            printf("số bạn nhập vào là số chính phương\n");
        }
        else
        {
            printf("số bạn nhập vào không phải là số chính phương\n");
        }
        printf("bạn có muốn sử dụng chương trình nữa không yes or no\n");
        scanf("%s", &check);
    } while (strcmp(check, "yes") == 0);
}
void findMinMax()
{
    char check[5] = "yes";
    do
    {
        int a, b;
        int max = 0;
        printf("mời bạn nhập số a ");
        scanf("%d", &a);
        printf("mời bạn nhập số b ");
        scanf("%d", &b);
        if (a > b)
        {
            for (int i = 1; i <= b; i++)
            {
                if (a % i == 0 && b % i == 0)
                {
                    if (max < i)
                    {
                        max = i;
                    }
                }
            }
        }
        else if (a == b)
        {
            for (int i = 1; i <= b; i++)
            {
                if (a % i == 0 && b % i == 0)
                {
                    if (max < i)
                    {
                        max = i;
                    }
                }
            }
        }
        else
        {
            for (int i = 1; i <= a; i++)
            {
                if (a % i == 0 && b % i == 0)
                {
                    if (max < i)
                    {
                        max = i;
                    }
                }
            }
        }
        printf("Ước chung nhỏ nhất của %d và %d là %d\n", a, b, max);
        printf("bội số chung nhỏ nhất của %d và %d là %d\n", a, b, (a + b) / max);
        printf("bạn có muốn sử dụng chương trình nữa không yes or no\n");
        scanf("%s", &check);
    } while (strcmp(check, "yes") == 0);
}
void karaoke()
{
    char check[5] = "yes";
    do
    {
        int timeStart;
        int timeEnd;
        printf("quán chỉ hoạt động từ 12h-23h không được nhập ngoài khoảng đó\n");
        printf("mời bạn nhập giờ đầu tiên bạn sử dụng: ");
        scanf("%d", &timeStart);
        printf("mời bạn nhập giờ cuối cùng bạn sử dụng: ");
        scanf("%d", &timeEnd);
        if (timeStart > 12 && timeEnd < 23)
        {
            if (timeStart >= 14 && timeStart < 17 && timeEnd - timeStart > 3)
            {
                printf("giá tiền của phòng này là %d VND đã được giảm giá 40%% \n", ((timeEnd - timeStart) * 50000) - (timeEnd - timeStart) * 50000 * 40 / 100);
            }
            else if (timeEnd - timeStart > 3)
            {
                printf("giá tiềm của phòng này là %d VND đã được giảm giá 10%% \n", ((timeEnd - timeStart) * 50000) - (timeEnd - timeStart) * 50000 * 10 / 100);
            }
            else
            {
                printf("giá tiền của phòng này là %d VND không được giảm giá \n", (timeEnd - timeStart) * 50000);
            }
        }
        else
        {
            printf("bạn nhập ngoài giờ làm việc,\n vui lòng nhập lại\n");
        }

        printf("bạn có muốn sử dụng chương trình nữa không yes or no\n");
        scanf("%s", &check);
    } while (strcmp(check, "yes") == 0);
}
void power()
{
    char check[5] = "yes";
    do
    {
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
        printf("\nbạn có muốn sử dụng chương trình nữa không yes or no\n");
        scanf("%s", &check);
    } while (strcmp(check, "yes") == 0);
}
void transformMoney()
{
    char check[5] = "yes";
    do
    {
        int myArr[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
        int soTo[9] = {0};
        int money;
        int i = 0;
        do
        {
            printf("mời bạn nhập tiền cần đổi ");
            scanf("%d", &money);
        } while (money <= 0);
        while (i < 9)
        {
            if (money > myArr[i])
            {
                break;
            }
            i++;
        }
        while (i < 9 && money > 0)
        {
            soTo[i] = money / myArr[i];
            money = money % myArr[i];
            i++;
        }
        printf("số tiền được đổi là: ");
        for (int j = 0; j < 9; j++)
        {
            if (soTo[j] > 0)
            {
                printf("\n%d tờ %d\n", soTo[j], myArr[j]);
            }
        }
        printf("bạn có muốn sử dụng chương trình nữa không yes or no\n");
        scanf("%s", &check);
    } while (strcmp(check, "yes") == 0);
}
void interestRate()
{
    char check[5] = "yes";
    float moneyBank;
    float restMoney;
    do
    {
        printf("chương trình cho vay tiền, số tiền bạn nhập phải lớn hơn 5.000.000\n");
        scanf("%f", &moneyBank);
        restMoney = moneyBank / 12;
        for (int i = 1; i <= 12; i++)
        {
            printf("lãi suất tháng %d là %.f VND số tiền cần phải trả tháng % i là %.f VND\n", i, moneyBank * 5 / 100, i, restMoney + (moneyBank * 5 / 100));
            moneyBank -= restMoney;
        }
        printf("bạn có muốn sử dụng chương trình nữa không yes or no\n");
        scanf("%s", &check);
    } while (strcmp(check, "yes") == 0);
}
void buyCar()
{
    char check[5] = "yes";
    do
    {
        printf("bạn đã chọn ứng dụng 7\n");
        printf("bạn có muốn sử dụng chương trình nữa không yes or no\n");
        scanf("%s", &check);
    } while (strcmp(check, "yes") == 0);
}

void student()
{
    char check[5] = "yes";
    do
    {
        int l;
        char nameStudent[100];
        printf("mời bạn nhập số học sinh bạn muốn(lưu ý phải là số nguyên): ");
        scanf("%d", &l);
        struct student arrStudent[l];
        for (int i = 0; i < l; i++)
        {
            printf("mời bạn nhập tên học sinh ");
            fflush(stdin);
            gets(nameStudent);
            strcpy(arrStudent[i].name, nameStudent);
            printf("mời bạn nhập điểm học sinh: ");
            scanf("%lf", &arrStudent[i].point);
        }
        for (int i = 0; i < l; i++)
        {
            if (arrStudent[i].point >= 9)
            {
                strcpy(arrStudent[i].standing, "Học lực xuất sắc");
            }
            else if (arrStudent[i].point >= 8)
            {
                strcpy(arrStudent[i].standing, "Học lực giỏi");
            }
            else if (arrStudent[i].point >= 6.5)
            {
                strcpy(arrStudent[i].standing, "Học lực khá");
            }
            else if (arrStudent[i].point >= 5)
            {
                strcpy(arrStudent[i].standing, "Học lực trung bình");
            }
            else
            {
                strcpy(arrStudent[i].standing, "Học lực yếu");
            }
        }
        for (int i = 0; i < l; i++)
        {
            for (int j = i + 1; j < l; j++)
            {
                if (arrStudent[j].point > arrStudent[i].point)
                {
                    struct student studentTemp = arrStudent[j];
                    arrStudent[j] = arrStudent[i];
                    arrStudent[i] = studentTemp;
                }
            }
        }

        for (int i = 0; i < l; i++)
        {
            printf("tên học sinh %s, điểm học sinh %.2lf, loại %s\n", arrStudent[i].name, arrStudent[i].point, arrStudent[i].standing);
        }
        printf("bạn có muốn sử dụng chương trình nữa không yes or no\n");
        scanf("%s", &check);
    } while (strcmp(check, "yes") == 0);
}

void randomGame()
{
    char check[5] = "yes";
    do
    {
        int a,b;
        int count=0;
        printf("mời bạn nhập số thứ nhất: ");
        scanf("%d", &a);
        printf("mời bạn nhập số thứ hai: ");
        scanf("%d", &b);
        int myArr[2];
        for(int i=0; i < 2; i++){
            myArr[i]=rand()%15+1;
        }
        for(int i=0; i < 2; i++){
            if (myArr[i] == a)
            {
               count++;
            }
            if(myArr[i] == b){
                count++;
            }
            
        }
        //output
        if(count == 2){
            printf("số của hệ thống là %d và %d:\n",myArr[0],myArr[1]);
            printf("số của bạn nhập vào là %d và %d:\n",a,b);
            printf("bạn đã chúng giải đặc biệt\n");
        }else if(count == 1){
            printf("số của hệ thống là %d và %d:\n",myArr[0],myArr[1]);
            printf("số của bạn nhập vào là %d và %d:\n",a,b);
            printf("bạn đã chúng giải nhì\n");
        }else{
            printf("số của hệ thống là %d và %d:\n",myArr[0],myArr[1]);
            printf("số của bạn nhập vào là %d và %d:\n",a,b);
            printf("chúc bạn may mắn lần sau\n");
        }
        printf("bạn có muốn sử dụng chương trình nữa không yes or no\n");
        scanf("%s", &check);
    } while (strcmp(check, "yes") == 0);
}

void calculate()
{
    char check[5] = "yes";
    do
    {
        struct fraction number1, number2;
        printf("mời bạn nhập vào phần tử thứ nhất:");
        scanf("%d%d", &number1.numerator,&number1.denominator);
        printf("mời bạn nhập vào phần tử thứ hai:");
        scanf("%d%d", &number2.numerator,&number2.denominator);
        struct fraction plus,divide,multi,minus;
        multi.numerator = number1.numerator * number2.numerator;
        multi.denominator = number1.denominator * number2.denominator;
        divide.numerator = number1.numerator * number2.denominator;
        divide.denominator = number1.denominator * number2.numerator;
        plus.numerator = number1.numerator * number2.denominator + number2.numerator*number1.denominator;
        plus.denominator = number1.denominator * number2.denominator;
        minus.numerator = number1.numerator * number2.denominator - number2.numerator*number1.denominator;
        minus.denominator = number1.denominator * number2.denominator;
        printf("Tổng của 2 phân số là: %d/%d\n", plus.numerator, plus.denominator);
        printf("Hiệu của 2 phân số là: %d/%d\n", minus.numerator, minus.denominator);
        printf("Tích của 2 phân số là: %d/%d\n", multi.numerator, multi.denominator);
        printf("Thương của 2 phân số là: %d/%d\n", divide.numerator, divide.denominator);
        printf("bạn có muốn sử dụng chương trình nữa không yes or no\n");
        scanf("%s", &check);
    } while (strcmp(check, "yes") == 0);
}

int main()
{
    int n;
    do
    {
        printf("chào mừng bạn đến với assignment cuối môn \n");
        printf("mời bạn chọn chức năng bạn muốn (1-10)\n");
        printf("1. kiểm tra số nguyên tố\n");
        printf("2. tìm ước chung và bộ trung nhỏ nhất của 2 số\n");
        printf("3. chương trình tính tiền quán karaoke\n");
        printf("4. chức năng tính tiền điện\n");
        printf("5. chức năng đổi tiền\n");
        printf("6. tính lãi xuất ngân hàng\n");
        printf("7. vay tiền mua xe\n");
        printf("8. sắp xếp thông tin sinh viên\n");
        printf("9. Fpoly-lott\n");
        printf("10. tính toán phân số\n");
        printf("0. thoát khỏi Chương trình\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            checkPrime();
            break;
        case 2:
            findMinMax();
            break;
        case 3:
            karaoke();
            break;
        case 4:
            power();
            break;
        case 5:
            transformMoney();
            break;
        case 6:
            interestRate();
            break;
        case 7:
            buyCar();
            break;
        case 8:
            student();
            break;
        case 9:
            randomGame();
            break;
        case 10:
            calculate();
            break;
        }
    } while (n != 0);
    printf("cảm ơn bạn đã sử dụng chương trình");
    return 0;
}
