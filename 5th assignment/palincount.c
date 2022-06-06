#include<stdio.h>
int main()
{
    char str1[30];
    printf("enter the string=");
    gets(str1);
    char choice;
    int f=0,c=0,w=0,k;
    printf("enter the choice=");
    scanf("%c",&choice);
    switch(choice)
    {
        case 'a':
        for(int i=0;;i++)
        {
            if(str1[i]=='\0')
            {
                k=i;
                break;
            }
        }
        for(int i=0;i<k/2;i++)
        {
            if(str1[i]!=str1[k-i-1])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        printf("the string is not pallindrome");
        else
        printf("the string is pallindrome");
        break;
        case 'b':
        for(int i=0;;i++)
        {
            if(str1[i]=='\0')
            {
                k=i;
                break;
            }
        }
        for(int i=k;i>=0;i--)
        str1[k+1]=str1[k];
        str1[0]=' ';
        for(int i=0;i<k+1;i++)
        {
            if((str1[i]==' ')&&(str1[i+1]!=' '))
            w++;
            if(str1[i]!=' ')
            c++;
        }
        printf("the number of words are %d and characters are %d in the given string",w,c);
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}