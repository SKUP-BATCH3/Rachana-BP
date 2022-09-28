#include<stdio.h>

struct marks
{
    char name[10];
    int marks;
}m[2];

main()
{
    for(int i=0;i<2;i++)
    {
        scanf("%s%d",&m[i].name,&m[i].marks);
    }
    for(int i=0;i<2;i++)
    {
        printf("%s %d\n",m[i].name,m[i].marks);
    }
}
