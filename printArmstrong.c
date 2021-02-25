//printing all Armstrong number between 1 to 1000
int  getArmstrong(int );
#include <stdio.h>
void main()
{
    int i,a;
    system("cls");

    for(i=0;i<1000;i++){
        a=getArmstrong(i);
        printf("%d ",a);
    }
    system("pause");
}
//creating function for finding armstrong number
    int  getArmstrong(int n)
    {
        int i,a,sum_of_cube=0;

            for(i=n;i;i=i/10){
            a =i%10;
            sum_of_cube =sum_of_cube+(a*a*a);
        }
        if(sum_of_cube == n)
       return n;
    }
