#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter the last number = ");
    scanf("%d",&n);
    printf("1+3+5+7+.....+n =  ");
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }

    printf(" %d\n",sum);

    getch();
}

