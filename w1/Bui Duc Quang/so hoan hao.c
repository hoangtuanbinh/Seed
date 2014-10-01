#include<stdio.h>
#include<conio.h>
int main()
{
	int n,t,i,kt=0;
	t=0;
	printf("nhap n:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	    if(n%i==0)
        t+=i;
    }
	if(t == n)
	    printf("%d la so hoan hao", n);
	else
		printf("%d khong phai la so hoan hao\n", n);
    getch();
    return 0;
}
