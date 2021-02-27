//program to reverse a given number

void main()
{
    int n,i,res=0,temp;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    //123
    while(n){
        temp = n%10;
        res = res*10+temp;
        n = n/10;
    }
    printf(" Reversed number is %d",res);
    printf("\n");
    system("pause");

}
