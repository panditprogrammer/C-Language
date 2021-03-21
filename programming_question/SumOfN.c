//program to display first 10 natural number and their sum
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,sum=0;
    system("cls");
    for(int i=1;i<=10;i++)
    {
     printf("%d ",i);
        sum = sum+i;
    }
    printf("\nSum is %d \n",sum);
    system("pause");

}