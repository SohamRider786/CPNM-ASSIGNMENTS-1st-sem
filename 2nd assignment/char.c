#include<stdio.h>
int main()
{
    char c;
    printf("enter character ");
    scanf("%c",&c);
    if((int)c>=65&&(int)c<=90)
    printf("upper case");
    else if((int)c>=97&&(int)c<=122)
    printf("lower case");
    else if((int)c>=48&&(int)c<=57)
    printf("digit");
    else
    {
        if((int)c>32)
        printf("special character");
    }
    return 0;
}