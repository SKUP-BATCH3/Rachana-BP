#include<stdio.h>
int a[]={2,3,9,5,11,10,54,32};
int temp;
int *p;
void without()
{
    printf("Without using pointers : ");
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<=7;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<8;i++)
    {
        printf("\t%d",a[i]);
    }
}
void with()
{
    p=&a;
    printf("\nWith using pointers : ");
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<=7;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    for(int i=0;i<8;i++)
    {
        printf("\t%d",a[i]);
    }
}
main()
{
        without();
        with();
}
