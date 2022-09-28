#include<stdio.h>
int main()
{
int i;
char a[21]="SriNIVASan";

for(i=0;i<21;i++)
{
if(a[i]>='a'&& a[i]<='z')
a[i]=a[i]-32;

else
a[i]=a[i]+32;

}
printf("%s",a);


}

















