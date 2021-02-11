//swapping of two numbers
#include <stdio.h>
void main()
{
    int a,b,temp;
    system("cls");

    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter a number");
    scanf("%d",&b);
    printf("you have entered a=%d  and b=%d\n",a,b);
    temp= a;
    a=b;
    b=temp;
    printf("after swap a = %d  b=%d\n",a,b);
    system("pause");
}
