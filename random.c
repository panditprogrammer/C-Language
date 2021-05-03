#include <stdio.h>

void main()
{
    system("cls");
    int x;
    srand();
    for (int i = 1; i < 27; i++)
    {
        x = rand() % 26;
        printf("%d ", x);
    }
    printf("%d ", x);
    system("pause");
}