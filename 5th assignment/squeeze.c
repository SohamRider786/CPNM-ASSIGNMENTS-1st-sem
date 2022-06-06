#include<stdio.h>
#include<string.h>
char* squeeze(char s[30],char c)
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]==c)
        {
            for(int j=i;s[j]!='\0';j++)
            {
                s[j]=s[j+1];
            }
            i--;
        }
    }
    return s;
}
int main()
{
    char str[30];
    char *ptr;
    char c;
    printf("enter the string=");
    gets(str);
    printf("enter the character to be squeezed=");
    scanf("%c",&c);
    ptr=squeeze(str,c);
    printf("the new string is=");
    puts(ptr);
    return 0;
}