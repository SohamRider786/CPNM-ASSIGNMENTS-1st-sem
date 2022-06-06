#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int c=0;
    printf("enter the string=");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(((str[i]=='a')||(str[i]=='A')||(str[i]=='e')||(str[i]=='E')||(str[i]=='i')||(str[i]=='I')||(str[i]=='o')||(str[i]=='O')||(str[i]=='u')||(str[i]=='U'))&&((str[i+1]=='a')||(str[i+1]=='A')||(str[i+1]=='e')||(str[i+1]=='E')||(str[i+1]=='i')||(str[i+1]=='I')||(str[i+1]=='o')||(str[i+1]=='O')||(str[i+1]=='u')||(str[i+1]=='U')))
        c++;
    }
    printf("the number of occurences of vowels in succession in a line is=%d",c);
    return 0;
}