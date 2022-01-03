#include <stdio.h>


main()
{
    int base,exponent,temp,power = 1;
    float power_d = 1.0;
    printf("Enter base ");
    scanf("%d",&base);
    printf("Enter exponent ");
    scanf("%d",&exponent);


    temp = exponent;
    if(exponent > 0)
    {
        while(exponent)
        {
            power = power*base;
            exponent--;
        }
        printf("power of %d^%d is %d \n",base,temp,power);
    }
    else
    {
        while(exponent)
        {
            power_d = power_d *(1.0/base);
            exponent++;
        }
        printf("power of %d^%d is %f \n",base,temp,power_d);
    }


}
