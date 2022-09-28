#include<stdio.h>
int alarm,day,c;
void notvaca(int day)
{
    if(day>0 & day<6)
    {
        printf("it's weekday and ");
        alarm=7;
        printf("alarm is %d",alarm);
    }
    if(day==0 | day==6)
    {
        printf("it's Weekend and ");
        alarm=10;
        printf("alarm is %d",alarm);
    }
}
void vaca(int day)
{
    printf("you are on vacation ");
    if(day == 0 | day == 6)
    {
        printf("alarm is off \n HAVE FUN ");
    }
    if(day>0 & day<6)
    {
        alarm = 10;
        printf("alarm is %d",alarm);
    }
}
main()
{
printf("Enter the day : ");
scanf("%d",&day);
printf("\n 1. on vacation ");
printf("\n 2. not on vacation ");
printf("\n Enter choice");
scanf("%d",&c);
switch(c)
{
    case 1: vaca(day);
            break;
    case 2:notvaca(day);
            break;
}
}
