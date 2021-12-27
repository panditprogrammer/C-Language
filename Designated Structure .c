#include <stdio.h>

// structure
struct St
{
    int a;
    int b;
    int c;
};



int main()
{
    // designated initialization of structure
    struct St s = {.a = 10, .b = 20, .c = 50};

    printf("a = %d, b = %d, c = %d\n",s.a,s.b,s.c);

    return 0;
}
