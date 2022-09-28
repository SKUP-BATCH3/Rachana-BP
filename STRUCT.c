#include<stdio.h>
#define p printf

struct employee
{
    char name[20];
    int id;
    int age;
    float sal;
    int exp;
}e;
void main()
{
    p("\tEnter details of 3 employees ");
    for(int i=0;i<3;i++)
    {
       p("\n\nEnter details of %d employee : ",i+1);
        p("\n\nEnter name of employee : ");
        scanf("%s",&e.name);
        p("\nEnter id of employee %s : ",e.name);
        scanf("%d",&e.id);
         p("\nEnter age of employee %s : ",e.name);
        scanf("%d",&e.age);
        p("\nEnter salary of employee %s : ",e.name);
        scanf("%f",&e.sal);
        p("\nEnter years of experience of employee %s : ",e.name);
        scanf("%d",&e.exp);
        p("\n\n %s %d %d %f %d",e.name,e.id,e.age,e.sal,e.exp);
    }

}
