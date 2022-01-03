//calculating length of an array using sizeof

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[] = {1,20,32,86,22,8,98,343,29,92,23,36,53,92,75,64,82,9,23,55,23};
    int length;
    system("cls");
   //first calculate sizeof one int block and total array size and then divide with one block
   length = sizeof(a)/sizeof(a[0]);
   printf("array length is %d ",length);


    system("pause");
}