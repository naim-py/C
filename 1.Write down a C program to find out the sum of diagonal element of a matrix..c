#include<stdio.h>
int main()
{
    int i,j,sum=0,A[3][3];
    printf("Enterr the elements for the matrix ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Diagonal elements are =\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                printf("%d",A[i][j]);
                printf("\n");
                sum=sum+A[i][j];
            }
        }
    }
    printf("Sum of diagonal elements is %d",sum);

    return 0;
}
