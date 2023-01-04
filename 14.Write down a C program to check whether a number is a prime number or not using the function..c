#include<stdio.h>
#include<conio.h>
//bool isPrimeNum(int n);

void main()
{
    int n,result;
    printf("Enter any number = ");
    scanf("%d",&n);

    result=checkPrime(n);
    if(result==1)
        printf("%d is prime number\n",n);
    else
        printf("%d is not a prime number\n",n);

    getch();
    return 0;
}
int checkPrime(int a)
{
    int i;
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
            return 0;
    }

        return 1;


}
