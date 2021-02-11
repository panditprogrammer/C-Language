//program to print name N times using loop

#include  <stdio.h>
void main(){
    int i,a;
    char s[20];
    system("cls");
    printf("Enter your name  : ");
    gets(s);
    printf("How many do you want to printf  ? ");
    scanf("%d",&a);

    for (i=0;i<a;i++){
        puts(s);
        printf("\n");
    }

}
