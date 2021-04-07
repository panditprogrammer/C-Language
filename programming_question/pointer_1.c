#include <stdio.h>
#include <stdlib.h>


void main()
{
    int p,x,*a;
    system("cls");
    printf("Enter a number");
    scanf("%d",&p);
    //pointer contains address of another variable 'a' is pointer for address of 'p' int type variable
    a=&p;
    printf("address of %d is %u \n",p,a); // %u is used to print address of variable

    printf("address of %d is %u \n",p,&p);
    printf(" p is equal to ' *&p ' or (p = *&p) %d \n",*&p);// we can write p variable like '*&p' is is also a variable p and we can use it as simple p (p=*&p)

    system("pause");
}
