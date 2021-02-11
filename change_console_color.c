//program to change color of console windows
#include <stdio.h>

void main()
{
        while(1)
        {
            char a[4] ;
            system("cls");
            printf("\t Choose  color from here \n");
            printf("0.Black\n");
            printf("1 .Blue\n");
            printf("2 .green\n");
            printf("3 .Aqua\n");
            printf("4 .Red\n");
            printf("5 .Purple\n");
            printf("6 .Yellow\n");
            printf("7 .White\n");
            printf("8 .Gray \t");
            printf("9 .Light Blue\t");
            printf("A .Light Green\n");
            printf("B .Light Aqua\n");
            printf("C .Light Red\n");
            printf("D.Light Purple\n");
            printf("E .Light Yellow\n");
            printf("F .Bright White\n");
            printf("18 . CTRL + C to Exit\n");

            printf("Enter background color and foreground color\n \t like this 'color 4a' : \n>>");
            gets(a);
            system(a);

        }



}
