//C Program to check leap year
#include <stdio.h>
void main()
{
    int y;
    system("cls");
    printf("Enter Year ");
    scanf("%d",&y);
    if(y%4==0)
    {
        printf("leap year\n");
    }
    else
    {
            if(y%100!= 0)
            {
                printf("Not a Leap year\n");
            }
        else
        {
                if(y%400==0)
            {
                printf("leap year\n");
            }
                else
                    {
                        printf("Not a Leap year\n");
                    }
        }
    }
    system("pause");


}
