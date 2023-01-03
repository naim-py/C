#include<stdio.h>
int main()
{
    int uppersum=0,i,j,lowersum=0,A[3][3];
    printf("Inter the elements of matrix ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("A[%d][%d]",i,j);
        scanf("%d",&A[i][j]);
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)

            printf("%d",A[i][j]);
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                uppersum = uppersum + A[i][j];
            }

            if(i>j)
            {
                lowersum = lowersum + A[i[j];
            }

        }
    }


    printf("Uppersum of the triangle = %d\n",uppersum);
    printf("lowersum of the triangle = %d\n",lowersum);
}
