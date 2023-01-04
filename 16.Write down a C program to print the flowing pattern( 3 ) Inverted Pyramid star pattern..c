#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of n =  ");
    scanf("%d",&n);
    for(i=n; i>=1; --i)
    {
        for(j=0; j<n-i; ++j)

            printf("  ");


        for(k=i; k<=(2*i-1); k++)



            printf(" *");
        for(k=0; k<i-1; k++)
            printf(" *");
        printf("\n");
    }
    return 0;
}


