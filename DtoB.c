#include<stdio.h>
main()
{
    int a,b,r;
    a=256;
    for(int i=0;i<=9;i++)
    {
        r=a%2;
        a=a/2;
        if(r==0)
           printf("%d",r);
            else
            printf("1");

    }
}
