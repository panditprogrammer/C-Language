//structure application in c
#include <stdio.h>

struct student{
    char name[30];
    int roll;
    int age;
    int Class;
    int fees;

};

struct student input_s_data(){
    struct student s;
    printf("\nEnter name ");
    scanf("%s",&s.name);
    fflush(stdin);
    printf("\nEnter roll ");
    scanf("%d",&s.roll);
    fflush(stdin);
    printf("\nEnter class ");
    scanf("%d",&s.Class);
    fflush(stdin);
    printf("\nEnter age ");
    scanf("%d",&s.age);
    fflush(stdin);
    printf("\nEnter fees ");
    scanf("%d",&s.fees);
    return s ;

}

void show_s_data(struct student s){

    printf("\nName of student is %s and ",s.name);
    printf("\n roll is %d",s.roll);
    printf("\n Class is %d",s.Class);
    printf("\n age is %d",s.age);
    printf("\n Fees is %d \n",s.fees);

}

void main()
{
    system("cls");
    printf("==Taking input and showing data ====\n");

    struct student s1;
    s1 = input_s_data();
    show_s_data(s1);

    system("pause");
}
