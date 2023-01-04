#include<stdio.h>
#include<limits.h>
int main()
{
    int A[20],size,i,max1,max2;
    printf("Enter size of an array ");
    scanf("%d",&size);
    printf("Enter elements of aaray = ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&A[i]);
    }


    for(i=0; i<size; i++)
    {

        printf("%d",A[i]);
    }
    max1=max2=INT_MIN;
    //check for first largest and second



    for(i=0; i<size; i++)
    {


        if(A[i]>max1)
        {

            max2=max1;
            max1=A[i];
        }



        else if(A[i]>max2 && A[i]<max1)
        {
            //second largest
            max2=A[i];
        }

    }
    printf("\nFirst largest =%d\n ",max1);
    printf("\nSecond largest =%d\n ",max2);

    getch();
    return 0;
}

