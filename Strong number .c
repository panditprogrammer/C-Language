#include <stdio.h>

/* The Sum of, factorial of all digits of a number is equal to the Number is called 'Strong number'.
*/

int fact(int num)
{
    if(num ==0 )
        return 1;
    return (num*fact(num-1));
}

main()
{
    system("cls");
    int number,temp,test = 0,digit;
    printf("Enter a number to check Strong number ");
    scanf("%d",&number);

    temp = number;
    while(temp)
    {
        digit = temp%10;
        test += fact(digit);
        temp = temp /10;
    }

    if(test == number)
        printf("This is Strong number \n");
    else
        printf("This is Not Strong number \n");


    system("pause");


}
