#include <stdio.h>

int main()
{
//    int array[10] = {12,0,0,0,34,0,0,0,0,0};

    // designated initialization of array - same as previous
    int array[10] = {[0]=12,[4]= 34};

    for(int i=0; i<10; i++)
    printf("%d ",array[i]);

}
