//program to find simple interest
#include <stdlib.h>
#include <stdio.h>

void main()
{
    float p,r,si,t;
    
    system("cls");
    printf("Enter Principle, Rate, Time ");
    scanf("%f%f%f",&p,&r,&t);
    si = (p*r*t)/100;
    printf("Simple interest is %f\n",si);
    system("pause");
}
