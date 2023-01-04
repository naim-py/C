#include<stdio.h>
#include<conio.h>

int main()
{
    int A[10][10],B[10][10],Result[10][10];
    int i,j,k,r1,r2,c1,c2,multiple=1;
    printf("Enter rows and cols for A matrix = ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and cols for B matrix = ");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Error  !! c1 is not equal to r2 ");

        printf("Enter rows and cols for A matrix = ");
        scanf("%d %d",&r1,&c1);
        printf("Enter rows and cols for B matrix = ");
        scanf("%d %d",&r2,&c2);
    }
    //A Scanning input
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //A Printing input
    printf("\nMatrix A =\n");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
        {
            printf("  %d",A[i][j]);

        }
        printf("\n");
    }
    //B Scanning input
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    //B Printing input
    printf("\nMatrix B\n ");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("  %d",B[i][j]);

        }
        printf("\n");
    }
    //multiplying matrix
    printf("\n\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                multiple=A[i][k] * B[k][j];
            }
            Result[i][j]=multiple;
        }
    }
    printf("\tResult= \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",Result[i][j]);
        }

    }
    getch();
}

