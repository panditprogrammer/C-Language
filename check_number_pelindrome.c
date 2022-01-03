#include <stdio.h>

main()
{
    int number, result=0,temp,remainder,quotient;
    printf("Enter a number ");
    scanf("%d",&number);

    quotient = number;
    while(quotient)
    {
        remainder = quotient % 10;
        result = result *10 + remainder;
        quotient = quotient/10;
    }

    if(result == number)
    {
        printf("Given number is Pelindrome\n");

    }
    else
      {
        printf("Given number is not Pelindrome\n");

    }

}
