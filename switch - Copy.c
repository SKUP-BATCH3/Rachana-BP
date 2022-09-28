#include<stdio.h>
main()
{
    int n1,n2,n3;
    int c;
    printf("enter the 3 numbers ");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("case 1 to check 1st number ");
    printf("\ncase 2 to check 2nd number ");
    printf("\ncase 3 to check 3rd number ");
    printf("\nenter the case to be checked ");
    scanf("%d",&c);
        switch(c)
        {
            case 1: if(n1>n2 && n1>n2)
                        printf(" %d is greater",n1);
                        else printf(" not greater");
                        break;

            case 2: if(n2>n1&&n2>n3)
                        printf(" %d is greater",n2);
                        else printf(" not greater");
                        break;

            case 3: if(n3>n1&&n3>n2)
                        printf(" %d is greater",n3);
                        else printf(" not greater");
                        break;

         //   default : break;

    }
}
