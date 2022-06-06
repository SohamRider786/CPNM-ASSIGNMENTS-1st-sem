#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int value(char c)
{
    if(c>='0'&&c<='9')
        return (int)c-'0';
    else
        return (int)c -'A'+10;
}
int any_to_dec(char *str, int base)
{
    int len = strlen(str);
    int power = 1;
    int num = 0;
    int i;
    for(i=len-1;i>=0;i--)
    {
        num += value(str[i]) * power;
        power = power * base;
    }

    return num;
}
char reVal(int num)
{
    if(num >=0 && num <=9)
        return (char)(num + '0');
    else    
        return (char)(num - 10 + 'A');    
}
char* dec_to_any( int inputNum, int base)
{
    static char res[100];
    int index=0;
    while(inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';
    int len = strlen(res);
    int i;
    for(i=0;i<len/2;i++)
    {
        char temp = res[i];
        res[i] = res[len-i-1];
        res[len-i-1] =temp;
    }
    return res;
}
int main()
{
    int ibase,fbase;
    char * ptr;
    printf("enter the initial base=");
    scanf("%d",&ibase);
    printf("enter the final base=");
    scanf("%d",&fbase);
    char str[100];
    fflush(stdin);
    printf("enter the number=");
    gets(str);
    char* str1;
    int x,y,z;
    if(ibase==fbase)
    puts(str);
    else
    {
        int ch;
        if(ibase == 10)
        ch=1;
        else if(fbase == 10)
        ch=2;
        else
        ch=3;
        switch(ch)
        {
            case 1:
            x=atoi(str);
            str1=dec_to_any(x,fbase);
            printf("the resultant number is=");
            puts(str1);
            break;
            case 2:
            y=any_to_dec(str,ibase);
            printf("the resultant number is=%d",y);
            break;
            case 3:
            z=any_to_dec(str,ibase);
            ptr=dec_to_any(z,fbase);
            printf("the resultant number is=");
            puts(ptr);
            break;
            default:
            printf("invalid input");
            break;
        }
    }
    return 0;
}