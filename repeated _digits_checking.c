//checking repeated digit in a number
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int seen[10] = {0};
    int n;
    int rem;
    printf("Enter the number ");
    scanf("%d",&n);

    while(n>0)
    {
        rem = n%10;
        if(seen[rem] == 1)
        break;
        seen[rem] = 1;
        n= n/10;
    }
    if(n>0)
        printf("repeated digit found\n");
    else
        printf("not repeated digit fount\n");
}
