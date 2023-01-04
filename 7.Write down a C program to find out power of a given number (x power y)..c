#include<stdio.h>
int main()
{
    int base,exp;
    long long result=1;
    printf("Enter a base number ");
    scanf("%d",&base);
    printf("Enter a exponent number ");
    scanf("%d",&exp);

    while(exp !=0)
    {
        result *=base;
        --exp;
    }
    printf("\nAnswer = %3d",result);

    return 0;
}
