//program to use switch statement and print sunday to monday
#include <stdlib.h>
#include <stdio.h>
void main()
{
    int a;
        system("cls");
        printf("Enter day number  ");
        scanf("%d",&a);
        switch (a)
        {
        case 1 :
            printf("Today is Monday\n");
            break;
            system("pause");
        
        case 2 :
            printf("Today is Tuesday\n");
            break;
            system("pause");
        
        case 3 :
            printf("Today is Wednesday\n");
            break;
            system("pause");
        
        case 4 :
            printf("Today is Thursday\n");
            break;
            system("pause");
        
        case 5 :
            printf("Today is Friday\n");
            break;
            system("pause");
        
        case 6 :
            printf("Today is Saturday\n");
            break;
            system("pause");
        
        case 7 :
            printf("Today is Sunday\n");
            break;
            system("pause");
        
        default:
            printf("please enter valid number!\n");
            break;
            system("pause");

        }
    system("pause");
}