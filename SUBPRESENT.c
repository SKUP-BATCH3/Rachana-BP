#include<stdio.h>
int c=0,l,j=0;
void substring(char s[],char sb[])
{
    for(int i=0;i<8-1;i++)
    {
        if(sb[j]==s[i])
        {
            j++;
            c++;
        }
    }
}
main()
{
    char s[]="iceland";
    char sb[]="land";
    l=strlen(sb);
    substring(s,sb);
    if(c==l)
    printf("Present");
    else
    printf("not present");
}
