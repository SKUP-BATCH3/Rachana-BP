//program to read 10 numbers and find sum and average
#include<stdio.h>
main()
{
    int sum=0,avg,n,c;
    printf("enter the number :");
    scanf("%d",&n);
    printf("Choose 1 for Sum ");
    printf("\nChoose 2 for Average ");
    printf("\nenter the choice :");
    scanf("%d",&c);
    switch(c)
    {
        case 1:   for(int i=1;i<=n;i++)
                    {sum=sum+i;}
                    printf("\tsum is %d",sum);
                    break;

        case 2:     for(int i=1;i<=n;i++)
                    {sum=sum+i;}
                    avg=sum/n;
                    printf("\tavg is %d",avg);
                    break;
    }

}
