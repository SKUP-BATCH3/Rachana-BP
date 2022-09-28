#include<stdio.h>
struct stdent
{
char name[10];
int id;
float exp;
int age;
float salary;
}e;
void main()
{
    printf("\tEnter details of 3 employees ");
    for(int i=0;i<3;i++)
    {
       printf("\n\nEnter details of %d employee : ",i+1);
        printf("\n\nEnter name of employee : ");
        scanf("%s",&e.name);
        printf("\nEnter id of employee %s : ",e.name);
        scanf("%d",&e.id);
         printf("\nEnter age of employee %s : ",e.name);
        scanf("%d",&e.age);
        printf("\nEnter salary of employee %s : ",e.name);
        scanf("%f",&e.salary);
        printf("\nEnter years of experience of employee %s : ",e.name);
        scanf("%d",&e.exp);
        printf("\n\n %s %d %d %f %d",e.name,e.id,e.age,e.salary,e.exp);
    }

}










