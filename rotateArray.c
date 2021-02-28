//program to rotate an array by n position
#define RIGHT 1
#define LEFT 0
#include <stdio.h>
void showArray(int len,int ar[]);
void rotateArray(int arr[],int n,int dir,int shift);

void main()
{
    int a[5]={10,20,30,40,50};
    system("cls");

    showArray(5,a);
    rotateArray(a,5,LEFT,2);
    showArray(5,a);

    system("pause");
}

void showArray(int len,int ar[])
{
    int i;
    for(i=0;i<len;i++)
    printf(" %d",ar[i]);
    printf("\n");
}
void rotateArray(int arr[],int n,int dir,int shift)
{
    int i,temp;
    if(dir == RIGHT)
    {
        while(shift)
        {
            temp = arr[n-1];
            for(i=n-1;i>=1;i--)
            {

                arr[i] = arr[i-1];
            }

            arr[0] = temp;
            shift --;
        }

    }
    else
        {
            while(shift)
            {
                temp = arr[0];
                for(i=0;i<=n-2;i++)
                {
                    arr[i] = arr[i+1];
                }
                arr[n-1] = temp;
                shift --;
            }

        }

}
