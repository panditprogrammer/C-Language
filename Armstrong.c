// Armstrong number checking program
#include <stdio.h>
void main()
{
    int n,a,i,sum_of_cube=0;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=n;i;i=i/10){
        a =i%10;
        sum_of_cube =sum_of_cube+(a*a*a);
    }
    if(sum_of_cube == n){
        printf("Congratulation ! The number you have entered is an Armstrong number \n");
    }
    else{
        printf("Not an Armstrong number\n");
    }
    system("pause");

}
