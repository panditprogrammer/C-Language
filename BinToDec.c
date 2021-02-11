//binary to decimal convertor

#include <stdio.h>
#include <math.h>
void main()
{
    int i=0,dec=0,bin=0;
    system("cls");
    printf("Enter a binary number ");  //1010
    scanf("%d",&bin);
    while(bin){
        dec = dec+pow(2,i)*(bin%10);
        bin = bin/10;
        i++;
    }
    printf("Decimal number of %d is %d",bin,dec);

    system("pause");
}
