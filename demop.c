#include<stdio.h>
main()
{
    int a[]={1,1,0,9,3,5,4};
    int *p=&a;
    //printf("%d",*p++);
    //printf("%d",++*p);
    // printf("%d",*++p);
    //printf("%d",*(p++));
    printf("%d",(*p)++);
}
