#include <stdio.h>
// add numbers using half adder logic

main()
{
    int a,b,sum=0,carry=0;
    printf("Enter two numers \n");
    scanf("%d%d",&a,&b);

    while(b)
    {
        sum = a^b; // XOR
        carry = (a&b)<<1; //left shift
        a = sum;
        b = carry;

    }



    printf("sum is %d\n",a);
}
