#include<stdio.h>
#include<math.h>
char * rev_wrd1(char str[])
{
    static char res[50];
    char word[15],temp;
    int c=0;
    int l=0,d;
    for(int i=0;;i++)
    {
        if(str[i]=='\0')
        {
            d=i;
            break;
        }
    }
    str[d]=' ';
    str[d+1]='\0';
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            word[c]='\0';
            for(int j=0;j<c/2;j++)
            {
                temp=word[j];
                word[j]=word[c-1-j];
                word[c-1-j]=temp;
            }
            for(int k=0;word[k]!='\0';k++)
            {
                res[l++]=word[k];
            }
            res[l++]=' ';
            c=0;
        }
        else
        {
            word[c++]=str[i];
        }
    }
    return (res);
}
char * rev_wrd2(char str[])
{
    static char res[50];
    int d,c=0;
    char word[15];
    for(int i=0;;i++)
    {
        if(str[i]=='\0')
        {
            d=i;
            break;
        }
    }
    str[d]=' ';
    str[d+1]='\0';
    res[d--]='\0';
    for(int j=0;str[j]!='\0';j++)
    {
        if(str[j]==' ')
        {
            word[c]='\0';
            int l=c-1;
            for(int f=l;f>=0;f--)
            {
                if(d>=0)
                {
                    res[d--]=word[f];
                }
            }
            res[d--]=' ';
            c=0;
        }
        else
        {
            word[c++]=str[j];
        }
    }
    return (res);
}
int main()
{
    char str[50];
    char * ptr;
    printf("enter the string=");
    gets(str);
    int choice;
    printf("enter the choice=");
    scanf("%d",&choice);
    if(choice==1)
    ptr=rev_wrd1(str);
    if (choice==2)
    ptr=rev_wrd2(str);
    printf("the new string with words reversed is=");
    puts(ptr);
    return 0;
}