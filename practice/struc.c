#include <stdio.h>
#include <string.h>

struct Date{
    int day;
    int month;
    int year;
};
struct Book{
    int bookId;
    char name[100];
    int bookNumbers;
    struct Date dateRealease;
    struct time{
        int hour;
    }timeRead;
    struct diem{
        int point;
    }k,a,l;
    double price;
}book1;

int main(){
    struct Book book2;
    book2.bookId = 100;
    strcpy(book2.name,"Hôm nay tôi buồn");
    book2.bookNumbers = 14;
    book2.price = 50000;
    book2.dateRealease.day = 11;
    book2.dateRealease.month = 05;
    book2.dateRealease.year = 2000;
    book2.timeRead.hour = 10;
    book2.k.point = 8;
    book2.a.point = 6.5;
    book2.l.point = 6;
    printf("Mã sách %d \n", book2.bookId);
    printf("tên sách %s \n", book2.name);
    printf("số lượng sách %d\n", book2.bookNumbers);
    printf("giá sách %.lf VND\n", book2.price);
    printf("ngày xuất bản %d/%d/%d\n", book2.dateRealease.day,book2.dateRealease.month,book2.dateRealease.year);
    printf("thời gian để đọc sách dự kiến %d tiếng \n", book2.timeRead.hour);
    printf("%0.1f\n%0.1f\n%0.1f",book2.k.point,book2.a.point,book2.l.point);
    return 0;
}