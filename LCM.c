//program to calculate LCM of two numbers
#include <stdio.h>
void main()
{
    int a,b,i,lcm=0,m;
    system("cls");
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    m=a>b?a:b;
    for(i=m;i<=a*b;i=i+m){
        if(i%a==0&&i%b==0){
            lcm = i;//this is not required
            break;
        }
    }
    printf("lcm of %d and %d is %d\n",a,b,lcm);
    system("pause");
}
