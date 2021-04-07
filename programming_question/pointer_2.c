#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x=10, *p,**p1;
    system("cls");
    p=&x;
    p1=&p; // p1 is pointer variable for pointer variable p this
    //is called extended concept of pointer
    printf(" address of %d is %u \n",x,p);
    printf(" address of pointer address is %u is %u \n",p,p1);

}
