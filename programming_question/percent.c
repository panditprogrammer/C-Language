//program to find sum of 5 subjects and find percentage
int main(int argc, char const *argv[])
{
    int s1,s0,s2,s3,s4;
    system("cls");
    printf("Enter marks of 5 subjects seperated by comma");
    scanf("%d,%d,%d,%d,%d",&s0,&s1,&s2,&s3,&s4);
    int sum = (s0+s1+s2+s3+s4);
    printf("Sum of 5 subjects is %d\n",sum);
    printf("percentage of 5 subjects is %d %%\n",sum/5);
    system("pause");
    return 0;
}
