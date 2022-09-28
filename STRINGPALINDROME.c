#include<stdio.h>
char str[100],n[100];
int c=1;
void pal()
{
     n=strrev(str);
    for(int i=0;i<strlen(str);i++)
{
    if(str[i]==n[i])
        c++;
}
    if(c!=1 & c>=strlen(str))
        printf("is");
    else
        printf("not");
}
main()
{
    scanf("%s",&str);
    pal();

}
