#include <stdio.h>
#include <stdlib.h>
//void swap(void);


void swap(int *x,int *y)
{
    int temp;
    temp= *x;
    *x= *y;
    *y= temp;



}
void main()
{

    int a,b;
    int *p,*p1;

    system("cls");

    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    swap(&a,&b);//writing a function to swap two vulue of variables
    printf("a is %d and b is %d \n",a,b);
    printf("swap successfully \n");



}
