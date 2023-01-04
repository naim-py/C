#include<stdio.h>
int main()
{
    int A[3][3],i,j;

    printf("\nEnter elements of matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Elements [%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nMatrix is = \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%2d  ",A[i][j]);
        }
        printf("\n\n");
    }
    printf("\nUpper trianguler value = \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            {
                printf("%4d  ",A[i][j]);
            }
        }
    }
    getch();
}
