//program to convert temperature from degree centigrade to fahrenheit
#include <stdio.h>
#include <stdlib.h>
void main()
{
    float c ,t;
    system("cls");
    printf("Enter temperature in degree centigrade ");
    scanf("%f",&c);
    t = (c*1.8)+32;
    printf("temperature in fahrenheit %.2f \n",t);
    system("pause");
}