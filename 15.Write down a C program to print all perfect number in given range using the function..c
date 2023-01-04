#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,divSum,counter;
    printf("Enter a number ");
    scanf("%d",&n);
    for(counter=1; counter<=n; counter++)
    {
        divSum=0;
        for(i=1; i<=counter/2; i++)
        {
            if(counter%i==0)
            {
                divSum+=i;
            }
        }
        if(divSum==counter)
        printf("  %d is the perfect number\n",counter);
    }

    getch();
    return 0;
}
