#include<stdio.h>
int main()
{
    int num,rem,sum=0,i;
    printf("Enter a number= ");
    scanf("%d",&num);
    for(i=1;i<=(num-1); i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
        printf("Entered number is perfect number");
    else
        printf("Entered number is not a perfect number");
    getch();
}
