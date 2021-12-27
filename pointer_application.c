//find min and max value in an array using pointer
#include <stdio.h>

void find_min_max(int ar[], int len, int *min, int *max)
{
    *min = *max = ar[0];
    for(int i=1; i<len; i++)
    {
        if(ar[i] > *max)
            *max = ar[i];

        if(ar[i] < *min)
            *min = ar[i];
    }
}

int main()
{
    int array[] = {12,30,38,3,87,34,64,17,98,29};
    int min,max,len = 10;

    find_min_max(array,len,&min,&max);

    printf("Min = %d, Max = %d\n",min,max);


    return 0;
}
