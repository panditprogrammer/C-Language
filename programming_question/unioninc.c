
union item
{
    int x;
    float y;
    char z;
};

void main()
{
    system("cls");
    union item item1;
    item1.x=10;
    printf(" x is %d\n",item1.x);
    item1.y=20;
    item1.z='a';
    printf("x=%d  and y= %.2f and z=%c \n",item1.x,item1.y,item1.z);
    //now print x and get x is not 10 similarly y
    printf("x memory block is used by float y data type (overwriting )\n");
    printf(" x is %d\n",item1.x);
    printf(" y is %.3f\n",item1.y);
    system("pause");
}

