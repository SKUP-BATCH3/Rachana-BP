        //Program to reverse a string using pointers

#include<stdio.h>
void main()
{
    char s[] ="SHRI";
    char *p;
    p=&s;
    int len=strlen(s);
    for(int i=len-1;i>=0;i--)
    printf("%c",p[i]);
}
