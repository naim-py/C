#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter the last number = ");
    scanf("%d",&n);
    printf("1^2 +3^2 +5^2 +7^2 +.....+n^n = ");
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }

    printf(" %d\n",sum);

    getch();
}
