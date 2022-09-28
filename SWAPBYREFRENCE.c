#include<stdio.h>
int n1=5,n2=10,temp=0;
int swap(int *n1,int *n2)
{
    temp=n1;
    n1=n2;
    n2=temp;
    printf("%d%d",*n1,*n2);
}

main()
{
    swap(&n1,&n2);

}
