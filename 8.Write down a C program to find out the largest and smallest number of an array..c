#include<stdio.h>
int main()
{
    int size,i,largest,smallest;
    printf("Enter the size of array ");
    scanf("%d",&size);
    int x[size];
    printf("enter the element of array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
    largest=x[0];
    for(i=1;i<size;i++)
    {
        if(x[i]>largest)
            largest=x[i];
    }
    smallest=x[0];
    for(i=1;i<size;i++)
    {
        if(x[i]<smallest)
            smallest=x[i];
    }
    printf("largest value is = %d",largest);
    printf("smallest value is = %d",smallest);
    getch();
    return 0;
}
