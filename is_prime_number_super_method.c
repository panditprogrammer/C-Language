#include  <stdio.h>
#include <math.h>
// check if the given number is prime

main()
{
    int number,i,check = 0;
    printf("Enter a number ");
    scanf("%d",&number);
    int sqrt_num = ceil(sqrt(number));

    for(i = 2; i<= sqrt_num; i++)
    {
        if(number <=3)
            break;

        if(number % i == 0)
        {
            check = 1;
            break;
        }

    }
    if(check==1 && number >0)
        printf("It's not a prime number \n");
    else if(check ==0  && number >0)
        printf("It's a prime number \n");
    else
        printf("It's Negative number \n");



}
