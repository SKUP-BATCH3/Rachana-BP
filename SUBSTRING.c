#include<stdio.h>
int a,b;
void substring(char s[],int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        printf("%c",s[i]);
    }
}
void main()
{
    char s[]="shrinivas";
    printf("Enter the start and end location of the string ");
    scanf("%d%d",&a,&b);
    substring(s,a,b);
}
