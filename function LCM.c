#include<stdio.h>
int lcm(int a,int b)
{
    int i,l=1;
    for(i=2;i<=a && i<=b;i++)
    {
        while(a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            l=l*i;
        }
    }
    l=l*a*b;
    return l;
}
int main()
{
    int num1,num2;
    printf("Enter the two number = ");
    scanf("%d %d",&num1,&num2);
    printf("LCM = %d",lcm(num1,num2));
    getch();
}
