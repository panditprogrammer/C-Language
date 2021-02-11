//program to check whether number is divisible by a number or not
void main()
{
    int a;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&a);
    if(a%5==0){
        printf("Number %d is divisible by 5\n",a);
    }
    else{
        printf("Number %d is not divisible by 5\n",a);
    }
    system("pause");
}
