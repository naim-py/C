#include<stdio.h>

int main()
{
    int num;
    printf("Enter any integer number \n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Even number = %d",num);
    }
    else
    {
        printf("Odd number = %d",num);
    }
    getch();
}


