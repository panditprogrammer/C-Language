#include <stdio.h>

/* The Sum of ,power of All digits of a number is if equal to the Number Called Armstrong Number */

int getDigits(int num)
{
    int count = 0;
    while(num)
    {
        num = num/10;
        count++;
    }
    return count;
}

int getPower(int num,int pow)
{
    int result =1,remain;
    while(pow)
    {
        result = result*num;
        pow--;
    }
    return result;
}

main()
{
    int number = 0,multi=1,remain;
    int digits,result=0;

    system("cls");
    printf("Enter a number to check armstrong number ");
    scanf("%d",&number);

    int temp_num = number;
    digits = getDigits(number);

    while(temp_num)
    {
        remain = temp_num%10;
        result += getPower(remain,digits);
        temp_num = temp_num/10; // reduce the digit
    }

    if(number == result)
        printf("This is An Armstrong number \n");
    else
        printf("This is not An Armstrong number \n");
    system("pause");

}
