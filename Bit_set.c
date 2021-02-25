//printing number which 2 bits set

#include <stdio.h>
void main()
{
    int n, x=3 ,y ,count;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    printf("These number have 2 binary bits set 'all numbers contains two 1,1' \n");
    while(n)
    {
        y=x;
        count = 0;
        while(y)
        {
            if(y%2==1)
                count++;
            y=y/2;
        }
        if(count == 2){
            printf(" %d",x);
            n--;
        }
        x++;
    }
    printf("\n");
    system("pause");
}

