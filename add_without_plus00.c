#include <stdio.h>
// add without using plus operator

main()
{
    int a,b;
    printf("Enter two numers \n");
    scanf("%d%d",&a,&b);

//    negative and positive numbers
    if(b <0)
    {
        while(b)
        {
            b++;
            a--;
        }
    }
    else
    {
        while(b)
        {
            a++;
            b--;
        }

    }
    printf("sum is %d\n",a);
}
