#include<stdio.h>
#include<math.h>
int main()
{
    char str[100],choice;
    printf("enter the string:\n");
    gets(str);
    int i=0,c=0,j=0;
    printf("enter the choice=");
    scanf("%c",&choice);
    switch(choice)
    {
        case 'a':
        while(str[i]!='\0')
        {
            if(str[i]!=' ')
            c++;
            i++;
        }
        printf("the total no of characters in the given string is=%d",c);
        break;
        case 'b':
        while(1)
        {
            if(str[j]=='\0')
            {
                break;
            }
            else
            j++;
        }
        printf("the reversed string is:");
        while(j>=0)
        {
            printf("%c",str[j]);
            j--;
        }
        break;
        default:
        printf("invalid choice");
        break;
    }
    return 0;
}