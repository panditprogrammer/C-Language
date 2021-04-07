#include <stdio.h>
#include <stdlib.h>
float add(void);
float sub(void);
float multi(void);
float divide(void);
float square(void);
float cube(void);
int menu(void);

float a=0,b=0;
float result=0;
int o=0,i=0;

void main(void)
{
    while(1)
    {

    system("cls");
    printf("\t******** www.PanditProgrammer.com *********\n");
    printf("[ Copyright © All rights are reserved by PanditProgrammer.com 2020 ] \n \n");
   
    switch (menu())
    {
    case 1:
        result =add();
        printf("result =%f",result);
        break;
    case 2:
        result =sub();
        printf("result =%f",result);
        break;
    case 3:
        result =multi();
        printf("result =%f",result);
        break;
    case 4:
        result =divide();
        printf("result =%f",result);
        break;
    case 5:
        result =square();
        printf("result =%f",result);
        break;
    case 6:
        result =cube();
        printf("result =%f",result);
        break;
    case 7:
        result=0;
        printf("result =%f",result);
        break;
    case 8:
        exit(0);
        break;
    
    default:
        printf("\tinvalid selection! Try again\n");
        break;
    
    }
    }
}
int menu( )
{
    printf("Select from menu :-\n");
    printf("\t1 Addition\n");
    printf("\t2 Subtraction\n");
    printf("\t3 Multiplication\n");
    printf("\t4 Division\n");
    printf("\t5 Square\n");
    printf("\t6 Cube\n");
    printf("\t7 Clear result\n");
    printf("\t8 Exit\n");
    printf("\t \t \t Result =%f\n",result);
    printf("Enter selection");
    scanf("%d",&i);
    return i;
}

float add(void)
{
    {
    if (result)
    {
        printf("Enter a number");
        scanf("%d",&o);
        return result+o;
        
    }
    else
    {
        printf("Enter two numbers :");
        scanf("%f%f",&a,&b);
        printf("Addition of %f and %f is %f\n",a,b,a+b);
        system("pause");
        return a+b;
    }
}
    
}
float sub(void)
{
   {
    if (result)
    {
        printf("Enter a number");
        scanf("%d",&o);
        return result-o;
        
    }
    else
    {
        printf("Enter two numbers :");
        scanf("%f%f",&a,&b);
        printf("Subtraction of %f and %f is %f\n",a,b,a-b);
        system("pause");
        return a-b;
    }
}
}
float multi(void)
{
    {
    if (result)
    {
        printf("Enter a number");
        scanf("%d",&o);
        return result*o;
        
    }
    else
    {
        printf("Enter two numbers :");
        scanf("%f%f",&a,&b);
        printf("Multiplication of %f and %f is %f\n",a,b,a*b);
        system("pause");
        return a*b;
    }
}
}
float divide(void)
{
    {
    if (result)
    {
        printf("Enter a number");
        scanf("%d",&o);
        return result/o;
        
    }
    else
    {
        printf("Enter two numbers :");
        scanf("%f%f",&a,&b);
        printf("Division of %f and %f is %f\n",a,b,a/b);
        system("pause");
        return a/b;
    }
}
}
float square(void)
{
    printf("Enter a number :");
    scanf("%f",&a);
    printf("square of %f is %f\n",a,a*a);
    system("pause");
    return a*a;
}
float cube(void)
{
    printf("Enter a number :");
    scanf("%f",&a);
    printf("Cube of %f is %f\n",a,a*a*a);
    system("pause");
    return a*a*a;
}



