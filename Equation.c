//program to find quadratic equation
#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter coefficient of x^2, x and constant term seperated by commas ");
    scanf("%d,%d,%d",&a,&b,&c);
    D = b*b-4*a*c;

    if(D<0)
        printf("Both roots are imaginary \n");
    if(D==0)
    {
        printf("Both roots are equal \n");
        x = -b/(2.0*a);
        printf(" %.2f \n",x);
    }

    if(D>0)
    {
        printf("Roots are real and distinct\n");
        x = (-b+sqrt(D))/(2.0*a);
        y = (-b-sqrt(D))/(2.0*a);
        printf("Roots are %.2f and %.2f ",x,y);
    }
    printf("\n");
    system("pause");

}
