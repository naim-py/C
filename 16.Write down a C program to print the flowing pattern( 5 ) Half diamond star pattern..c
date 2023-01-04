#include<stdio.h>
int main()
{
    int i,j,n,col;
    printf("Enter col ");
    scanf("%d",&n);
    col=1;
    for(i=1;i<n*2;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("*");
        }
        if(i<n)
        {
            col++;
        }
        else
        {
            col--;
        }
        printf("\n");
    }
    return 0;
}
