//program to sort an array using recursion
#include <stdio.h>
void sortarray(int arr[],int size);
int getIndex(int a[],int size);
void main()
{
    int num[10]={220,10,36,12,43,8,39,50,73,40};
    int i,size =10;

    system("cls");
    printf("After sorting array ");
    sortarray(num,size);
    for(i=0;i<size;i++)
        printf("%d ",num[i]);

    printf("\n");

    system("pause");
}

void sortarray(int arr[],int size)
{
    int indexOfMaxNum,temp;

    if(size > 1)
    {
        indexOfMaxNum = getIndex(arr,size);
        temp = arr[size -1];
        arr[size-1] = arr[indexOfMaxNum];
        arr[indexOfMaxNum] = temp;
        sortarray(arr,size-1);

    }
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
