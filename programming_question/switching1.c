//program to use switch case and display arithmetic operator
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a,b;
    int n;
    while(1)
    {

        system("cls");
        printf("press  ctrl+c to Exit.\n");
        printf("Enter two numbers ");
        scanf("%d%d",&a,&b);
        printf(" 1. Add\n 2. Sub\n 3. Multi\n 4. Div\n  operation no. ");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("Addition of %d and %d is %d \n",a,b,a+b);
            break;

        case 2:
            printf("Subtraction of %d and %d is %d \n",a,b,a-b);
            break;

        case 3:
            printf("Multiplication of %d and %d is %d \n",a,b,a*b);
            break;

        case 4:
            printf("Division of %d and %d is %d \n",a,b,a/b);
            break;

        default:
            printf("Enter valid number \n");
            break;
        }
    system("pause");
    }
}