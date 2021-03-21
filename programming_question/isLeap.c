//program to find entered year is leap or not
#include<stdlib.h>
#include<stdio.h>
void main()
{
    int l;
    system("cls");
    printf("Enter year ");
    scanf("%d",&l);
    if(l%100==0)
    {
        if(l%4==0)
        printf("Leap year\n");
        else
        printf("Not a Leap year\n");

    }
    else{
        if(l%4==0)
        printf("Leap year\n");
        else
        {
            printf("Not leap year \n");
        }
    }
    system("pause");
}