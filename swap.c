//program to swaping without third variable
void main()
{
    int a,b;
    system("cls");
    printf("Enter two numbers seperated by comma ");
    scanf("%d,%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping %d,%d\n",a,b);
    system("pause");
}
