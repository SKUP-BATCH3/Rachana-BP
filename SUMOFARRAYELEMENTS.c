#include<stdio.h>
main()
{
    int a[]={5,2,4,6,4,8};
    int *p;
    int sum;
    p=&a;
    sum=a[0];
    for(int i=1;i<6;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum : %d",sum);
}
