
#include<stdio.h>
int main()
{
    int a,b,result=1,i;
    printf("Enter value of a = ");
    scanf("%d",&a);

    printf("Enter value of b = ");
    scanf("%d",&b);

    for(i=1;i<=b;i++)
        result=result*a;
    printf("%d power %d = %d",a,b,result);
    getch();
}
