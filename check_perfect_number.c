#include <stdio.h>
// check perfect number
// if sum of their divisor is equal to the number

main()
{
    int number,remainder,sum;
    printf("Enter a number ");
    scanf("%d",&number);

    for(int i=1; i< number; i++)
    {
        remainder = number % i;
        if(remainder == 0)
            sum = sum + i;
    }

    if( sum == number)
        printf("It's a perfect number \n");
    else
        printf("It's not a perfect number \n");
}
