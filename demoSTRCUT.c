#include<stdio.h>
struct sample
{
    char a[4];
    int d[5];
    char h;
}s;
main()
{
    printf("%d",sizeof(s));
}
