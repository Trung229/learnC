#include <stdio.h>
#include <string.h>
struct student{
    int studentId;
    char studentName[100];
    char studentSpecialized[100];
    double studentPoint;
};

int main(){
    int n;
    int id;
    char name[100];
    char specialized[100];
    printf("mời bạn nhập số lượng sinh viên bạn muốn(1-100) ");
    scanf("%d",&n);
    struct student arrStudent[n];
    for(int i=0;i<n;i++){
        printf("mời bạn nhập mã số sinh viên: ");
        scanf("%d",&arrStudent[i].studentId);
        printf("mời bạn nhập tên sinh viên: ");
        fflush(stdin);
        gets(name);
        strcpy(arrStudent[i].studentName,name);
        printf("mời bạn nhập chuyên ngành sinh viên: ");
        fflush(stdin);
        gets(specialized);
        strcpy(arrStudent[i].studentSpecialized,specialized);
        printf("mời bạn nhập điểm trung bình ");
        scanf("%lf",&arrStudent[i].studentPoint);
    }

    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            if (arrStudent[i].studentPoint > arrStudent[j].studentPoint)
            {
                printf("hello\n");
                struct student studentTemp = arrStudent[j];
                arrStudent[j] = arrStudent[i];
                arrStudent[i] = studentTemp;
            }
            
        }
    }

    for(int i=0;i<n;i++){
        printf("mã số sinh viên %d, tên sinh viên %s, chuyên ngành sinh viên %s, điểm trung bình sinh viên %.lf\n",arrStudent[i].studentId, arrStudent[i].studentName, arrStudent[i].studentSpecialized, arrStudent[i].studentPoint);   
    }
    printf("mời bạn nhập mã số sinh viên bạn muốn tìm kiếm ");
    scanf("%d",&id);
    for(int i=0;i<n;i++){
        if(arrStudent[i].studentId == id){
            printf("sinh viên bạn tìm kiếm là: mã số sinh viên %d, tên sinh viên %s, chuyên ngành học %s, điểm trung bình %lf",arrStudent[i].studentId, arrStudent[i].studentName, arrStudent[i].studentSpecialized, arrStudent[i].studentPoint);
        }
    }
    return 0;
}