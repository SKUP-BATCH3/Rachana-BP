#include<stdio.h>
main()
{
    int d1,d2;
    printf("Enter the values for dice 1 and dice 2 : ");
    scanf("%d%d",&d1,&d2);
    int r=d1+d2;
    if(d1!=d2 & r!=6)
    printf("%d",r);
    else if(d1==d2)
    printf("%d",(d1+1)+d2);
    else if(r==6)
    printf("\n 1");
}
