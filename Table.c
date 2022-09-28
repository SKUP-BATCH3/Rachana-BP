#include<stdio.h>
main()
{
    int n,table,j;
    //printf("Enter the number : ");
    //scanf("%d",&n);
    printf("\nusing for loop ");
    for(int n=1;n<=10;n++)
    {
        for(int j=0;j<=10;j++)
        {
        table=n*j;
        printf("\n%d * %d = %d ",n,j,table);
        }printf("\n");
    }
    printf("\nusing while loop");
    /*while(j<=10)
    {
        table=n*j;
        printf("\n%d * %d = %d ",n,j,table);
        j++;

    }*/
}
