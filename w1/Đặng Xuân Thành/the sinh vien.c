#include <stdio.h>

int main(void)
{
    char name[30],birth[10],mssv[8],lop[10],khoa[9];
    int i;
    printf("nhap ho ten sinh vien: ");
    gets(name);
    printf("nhap ngay thang nam sinh dd/mm/yyyy: ");
    gets(birth);
    printf("nhap ma so sinh vien: ");
    gets(mssv);
    printf("nhap lop sinh vien (vd:BK1.01): ");
    gets(lop);
    printf("nhap khoa sinh vien (vd:k59): ");
    gets(khoa);
    for(i=1;i<50;i++)
        printf("=");
    printf("\n|| Ha Noi University of Scientific & Technology ||\n");
    printf("||             THE SINH VIEN                    ||\n");
    printf("|| Name:          %-30s||\n",name);
    printf("|| Date of birth: %-30s||\n",birth);
    printf("|| Code:          %-30s||\n",mssv);
    printf("|| Class:         %-30s||\n",lop);
    printf("|| Years:         %-30s||\n",khoa);
     for(i=1;i<50;i++)
        printf("=");
    return 0;
}
