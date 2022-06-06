#include<stdio.h>
#include<string.h>
int stend(char s[50],char t[30])
{
    int l=strlen(s);
    int k=strlen(t);
    int c=0;
    for(int i=l-1,j=k-1;i>=0,j>=0;i--,j--)
    {
        if(s[i]!=t[j])
        {
            c=1;
            break;
        }
    }
    if(c==0)
    return 1;
    else
    return 0;
}
int main()
{
    char s[50];
    char t[30];
    printf("enter the string=");
    gets(s);
    fflush(stdin);
    printf("enter the string to be checked=");
    gets(t);
    if(stend(s,t)==1)
    printf("the string %s occurs at the end of string %s",t,s);
    else
    printf("the string %s does not occur at the end of string %s",t,s);
    return 0;
}