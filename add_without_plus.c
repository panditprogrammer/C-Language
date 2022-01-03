#include <stdio.h>
// sum two numbers without using plus operator

main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    while(b)
    {
        a++; b--;
    }
    printf("Sum is %d\n",a);
}
