#include<stdio.h>
int num1,num2,num3,num4;
void square()
{
    printf("without parameters without return type : ");
    printf("\nenter the number : ");
    scanf("%d%d",&num1,&num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("%d%d ",num1,num2);
}
int sq()
{
    printf("\n\nwithout parameters with return type : ");
    printf("\nenter the number : ");
    scanf("%d%d",&num1,&num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    return num1,num2;
}
void squ(int num1 ,int num2)
{
    printf("\n\nwith parameters without return type : ");
    printf("\nenter the number : ");
    scanf("%d%d",&num1,&num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("%d%d ",num1,num2);
}
int squa(int num1,int num2)
{
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    int a=num1;
    int b=num2;
    return a,b;
}
void main()
{
int ch;
    printf("Enter the choice : ");
    scanf("%d",&ch);
    if(ch!=0)
    {
    switch(ch)
    {
        case 1: square();
                break;
        case 2: printf("%d ",sq());
                break;
        case 3: squ(num1,num2);
                break;
        case 4: printf("\n\nwith parameters with return type : ");
                printf("\nenter the number : ");
                scanf("%d%d",&num1,&num2);
                printf("%d%d \n",squa(num1,num2));
                break;
        default: break;
        }
    }
}
