#include<stdio.h>
main()
{
    int n,e,j,i;
    printf("Enter the number of elements you want to enter ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter %d elements for 1st array ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e);
            a[i]=e;
    }
   /* while(i<n)
    {
        j=i+1;
        while(j<n)
        {
            if(a[i]!=a[j])
            {
                printf("%d",a[i]);
                break;
            }
            j++;
        }
        i++;
    }*/

    for(int i=0,j=i+1;i<n,j<= n;i++,j++)
    {
        if(a[i]!=a[j])
    {
        printf("\n%d",a[i]);
    }

    }
}
