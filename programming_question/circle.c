//program to find area and circumference of circle
#include <stdlib.h>
#include <stdio.h>

void main()
{
    system("cls");
    float r,a,c;
    printf("Enter radius of circle ");
    scanf("%f",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Area of circle is %.2f\n",a);
    printf("Circumference of Circle is %.2f\n",c);
    system("pause");
}
