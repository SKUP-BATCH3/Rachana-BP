#include<stdio.h

//#include<time.h>
main()
{
    time_t t=time(NULL);
    printf("%s",ctime(&t));
}
