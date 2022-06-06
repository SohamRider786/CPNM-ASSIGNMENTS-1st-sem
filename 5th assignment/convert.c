#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[10];
    int num,c=0,sum=0;
    char choice,temp;
    printf("enter the choice=");
    scanf("%c",&choice);
    fflush(stdin);
    switch(choice)
    {
        case 'a':
        printf("enter the string=");
        gets(str);
        num=atoi(str);
        printf("%d",num);
        break;
        case 'b':
        printf("enter the number=");
        scanf("%d",&num);
        for(int i=num;i>0;i/=10)
        {
            sum=sum*10+i%10;
        }
        for(int i=sum;i>0;i/=10)
        {
            str[c++]=(char)(i%10+48);
        }
        printf("the number in string is=");
        for(int i=0;i<c;i++)
        printf("%c",str[i]);
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}