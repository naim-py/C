#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of n =  ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n-i; ++j)
        {
            printf("  ");
        }

        for(k=1; k<=(2*i-1); k++)
        {
            if(i==n || k==1 || k==(2*i-1))

            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }

            printf("\n");
        }
        return 0;
    }

