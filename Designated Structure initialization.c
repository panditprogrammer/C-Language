// Designated Structure Initialization
#include <stdio.h>

struct Computer
{
    int laptop_price;
    float Desktop_price;
};

main()
{
    // initializing variable this way
    struct Computer pc = {.laptop_price = 35000, .Desktop_price = 30550.600};

    printf("Laptop Price is %d\n",pc.laptop_price);
    printf("Desktop Price is %.3f\n",pc.Desktop_price);
}
