#include<stdio.h>
void main()
{
    char s[]="thechgthebnmthe";
    int l=strlen(s),j=0,c;
    char sb[]="the";
    c=strlen(sb);
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[i]==sb[j])
            {
                i++;
                j++;
                c++;
            }
        }
    }
    printf("%d",c/3);
}
