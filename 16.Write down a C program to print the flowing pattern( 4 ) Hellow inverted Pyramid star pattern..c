
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number of n =  ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; ++j)
        {
            printf("  ");
        }

        for(j=1; j<=(2*n-(2*i-1)); j++)
        {
            if(i==1 || j==1 || j==(2*n-(2*i-1)))

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


