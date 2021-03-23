#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num =0,num1 =0,num2=1,i;
    system("cls");
    printf("Fabonacci series upto 100 \n");
    for(i=0;i<10;i++)
    {
        num = num1+num2;
        if(num<100)
        printf("%d ",num);
        num1 = num2;
        num2 = num;
        
    }
    printf("\n");
    system("pause");
}