#include<stdio.h>
int main()
{
    int A[10][10],trans[10][10],r,c,i,j;
    printf("Enter rows and colmns = ");
    scanf("%d %d",&r,&c);
    printf("\nEnter elements of matrix = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements %d %d = ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",A[i][j]);
            if(j==c-1)
                printf("\n\n");

        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            trans[j][i]=A[i][j];
        }
    }
    printf("\nInverse matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",trans[i][j]);
            if(j==r-1)
                printf("\n\n");

        }
    }
    getch();


}

