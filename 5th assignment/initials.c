#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    printf("enter the string:-\n");
    gets(name);
    int l=strlen(name);
    for(int i=l-1;i>=0;i--)
    {
        name[i+1]=name[i];
    }
    name[0]=' ';
    printf("the initials are as follows:");
    for(int i=0;name[i]!='\0';i++)
    {
        if((name[i]==' ')&&(name[i+1]!=' '))
        printf("%c ",name[i+1]);
    }
    return 0;
}