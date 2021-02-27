//program to get index of  maximum number of an array using recursion
#include <stdio.h>
void main()
{
    int num[10]={220,10,36,12,43,8,39,5000,73,40},index,s=10;

    system("cls");
    index = getIndex(num,s);
    printf("Index of maximum number is %d ",index);
    printf("\n");
    system("pause");
}

int getIndex(int a[],int size)
{
    int max,maxindex,i;
    max =a[0];
    maxindex =0;
    for(i=1;i<size;i++)
        if(max<a[i])
    {
        max =a[i];
        maxindex =i;
    }
    return maxindex;
}
