#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("Enter any positive integers ");
    scanf("%d",&n);

    while(n>=1)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("\n Reverse number %d",rev);
    return 0;
}
