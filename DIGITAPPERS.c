#include<stdio.h>
main()
{
    int n1,n2,q1,q2;
    scanf("%d%d",&n1,&n2);
    if(n1<=99 & n1>=10 & n2<=99 & n2>=10)
    {
        q1=n1/n2;
        q2=n2%n2;
    }
    printf("%d",q1q2);
    /*if(q1|q2==0)
    return 1;
    else
    return 0;*/
}
