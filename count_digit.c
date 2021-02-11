//Program to count digits in a number
void main()
{
    int t=0,temp;
    int a;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&a); //maximum length of number is 10;
    temp = a;
    while(temp){
        temp=temp/10;
        t++;
    }
    printf("%d has %d digits\n",a,t);
    system("pause");
}
