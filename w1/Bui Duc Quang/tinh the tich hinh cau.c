#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    printf("THE TICH KHOI CAU");
    float r,thetich;
    printf("\nxin moi nhap ban kinh r:");
    scanf("%f",&r);
    thetich=4*M_PI*r*r*r/3;
    printf("the tich khoi cau la %10.3f",thetich);
    getch();
}
