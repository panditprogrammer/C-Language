//program to generate random number

#include <stdio.h>
void main()
{
    int num ;
    system("cls");
    printf("You are lucky your position will be ");

     num = srand()%10;
     printf(" %d \n",num);
     system("pause");
}
