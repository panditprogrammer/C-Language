//program to swap of two numbers without third variable
int main(int argc, char const *argv[])
{
    int n,n1;
    system("cls");
    printf("Enter two numbers ");
    scanf("%d%d",&n,&n1);
    n=n+n1;
    n1=n-n1;
    n=n-n1;
    printf("After swaping %d %d \n",n,n1);
    system("pause");
    return 0;
}
