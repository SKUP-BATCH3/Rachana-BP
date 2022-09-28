#include<stdio.h>
main()
{
int n1,n2,s;
scanf("%d%d",&n1,&n2);
s=n1==5|n2==5|n1+n2==5|n1-n2==5;
return s;
}
