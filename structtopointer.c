#include<stdio.h>
struct employee
{
    int age;
    int sal;
    int yexp;
}e[2];
main()
{
    struct employee *p;
    p=&e;
    for(int i=0;i<2;i++)
    scanf("%d%d%d",&p[i].age,&p[i].sal,&p[i].yexp);
    for(int i=0;i<2;i++)
    printf("%d %d %d",p[i].age,p[i].sal,p[i].yexp);
}
