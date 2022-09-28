        // Program to remove all the vowels from the String

#include<stdio.h>
main()
{
    char s[] = "shrinivasan";
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]!='a' & s[i]!='u' & s[i]!='o' &  s[i]!='i' & s[i]!='e')
             printf("%c",s[i]);
    }
}
