#include<stdio.h>
int main()
{
    int A[10],i,j,x;
    for(i=0; i<10; i++)
    {
        printf("Enter a variable = ");
        scanf("%d",&A[i]);
    }
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(A[i]<A[j])
            {
                x=A[j];
                A[j]=A[i];
                A[i]=x;
            }
        }
    }
    printf("Sorting = ");

    for(i=0; i<10; i++)
        printf("%d\t",A[i]);
        getch();
}
