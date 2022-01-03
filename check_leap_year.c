#include <stdio.h>

// checking leap year
main()
{
    int year;

    printf("Enter a year ");
    scanf("%d",&year);
    if(year %400 == 0 || ((year % 100) != 0 && year % 4 ==0))
        printf("%d is Leap year \n",year);
    else
        printf("%d is not Leap year \n",year);
}
