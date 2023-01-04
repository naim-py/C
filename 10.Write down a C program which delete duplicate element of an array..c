#include<stdio.h>

int main()
{
    int A[20],size,i,j,k;
    printf("Enter size of an array ");
    scanf("%d",&size);
    printf("Enter elements of aaray = ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Orginal Array \n");
    for(i=0;i<size;i++)
    {
        printf("%d",A[i]);
    }
    printf("\n\nNew Array \t\n");
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;)
        {
            if(A[j]==A[i])
            {
                for(k=j;k<size;k++)
                {
                    A[k]=A[k+1];
                }
                size--;

            }
            else
            {
                j++;
            }
        }
    }
    printf("\nArray element after deleting ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",A[i]);
    }
    getch();
    return 0;
}
