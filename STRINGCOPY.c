//WAP TO COPY ONE STRING INTO ANOTHER STRING WITHOUT USING PRE DEFINED FUNCTIONS
#include<stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter the 1st string : ");
    scanf("%s",&s1);
    for(int i=0;s1[i]!=NULL;i++)
    {
        s2[i]=s1[i];
    }
    printf("1st String %s",s1);
    printf("\n2nd String %s",s1);
    return 0;
}
