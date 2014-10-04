#include<stdio.h>
#include<conio.h>
int main()
{
    int a, i, x = 0;
    printf("Nhap vao so a= ",a);
    scanf("%d",&a);
    for(i=1; i<=a-1; i++)
    {
        if(a%i==0)
            x+=i;
    }
    if(x==a)
        printf("\n\tLa so hoan hao\n");
    else
    printf("\n\tKhong la so hoan hao\n");
    return 0;
}
