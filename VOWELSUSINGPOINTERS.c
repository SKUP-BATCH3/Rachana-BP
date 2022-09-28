#include<stdio.h>
main()
{
    char c[]="shrinivasan";
    char *p;
    int count=0,co=0,len;
    len=strlen(c);
    p=&c;
    for(int i=0;i<len;i++)
    {
        if(p[i]=='a' | p[i]=='e' | p[i]=='i' | p[i]=='o' | p[i]=='u' )
        count++;
        else
        co++;
    }
    printf("%d",count);
    printf("\n%d",co);

}
