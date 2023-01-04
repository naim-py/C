#include<stdio.h>
int main()
{
    int A[3][3],i,j;
    float determinant=0;
    printf("Enter the 9 elements of matrix ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nThe Matrix is  \n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            printf("  %d",A[i][j]);

        }
        printf("\n");
    }
    determinant=determinant + (A[0][i]*A[1][(i+1)%3]*A[2][(i+2)%3]-A[1][(i+2)%3]*A[2][(i+1)%3]);
        printf("\nInverse Matrix is\n\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("  %.2f\t",((A[(i+1)%3][(j+1)%3]*A[(i+2)%3][(j+2)%3])-(A[(i+1)%3][(j+2)%3]*A[(i+2)%3][(j+1)%3]))/determinant);
                printf("\n");
            }
        }
        getch();

    return 0;
}
