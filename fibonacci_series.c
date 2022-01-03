#include <stdio.h>
// find fibonacci series

main()
{
    int number ,a=0, b=1, result;
    printf("Enter a number of terms ");
    scanf("%d",&number);

    for(int i =1; i<=number; i++)
    {
        printf("%d ",a);
        result = a+b;
        a = b;
        b = result;
    }

}
