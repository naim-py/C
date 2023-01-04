#include<stdio.h>
#include<math.h>
float area(float r)
{
    return M_PI*r*r;
}
int main()
{
    float r;
    printf("Enter any radius = ");
    scanf("%f",&r);
    printf("Area of circle = %f",area(r));
    getch();
}
