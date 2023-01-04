#include<stdio.h>
long factorial(int p)
{
    int i;
    long f=1;
    for(i=2; i<=p; i++)
        f=f*i;
    return f;
}
void main()
{
    int n;
    printf("Enter any integer number = ");
    scanf("%d",&n);
    printf("Facterial value = %ld",factorial(n));
    getch();
}
