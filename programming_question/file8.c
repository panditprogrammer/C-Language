//    fprintf function  This function is used to write fromatted output to the specified stream

#include <stdio.h>
#include <stdlib.h>
// Write a program to write content to a file. Use fprintf() to write content to the file.
int main()
{
    FILE *fp;
    int a,b;
    fp=fopen("f1.txt","w");
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("\n%d",a+b);

    fprintf(fp,"Sum of %d and %d is %d",a,b,a+b);
    fclose(fp);
    printf("\nYour result written in file successfully. ");
}
