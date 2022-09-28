#include<stdio.h>
int n1,n2;
int sumdiff()
{
    if(n1+n2==5 | n1-n2==5) return 1;
    else return 0;
}
main()
{
    printf("Enter the numbers ");
    scanf("%d%d",&n1,&n2);
    printf("%d",sumdiff());
}
