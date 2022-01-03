#include <stdio.h>
// binary to decimal conversion

main()
{
    int decimal =0,binary ,base = 1,remainder , number ;

    printf("Enter binary number \n");
    scanf("%d",&binary);

    number = binary;
    while(binary)
    {
        remainder = binary%10;
        decimal = decimal + (remainder*base);
        binary = binary/10; // truncate the last digit
        base = base *2;
    }

    printf("Decimal is %d\n",decimal);

}
