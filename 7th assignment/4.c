#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void sum(char*,char*);
void difference(char*,char*);
void display(char*);
void input(int choice)
{
    char str1[40],str2[40];
    printf("enter the 1st number:-");
    gets(str1);
    printf("enter the 2nd number:-");
    gets(str2);
    switch(choice)
    {
        case 1:
        sum(str1,str2);
        break;
        case 2:
        difference(str1,str2);
        break;
        default:
        printf("invalid choice");
    }
}
void sum(char str1[40],char str2[40])
{
    int carry=0,i,num;
    char str3[40];
    char str4[40];
    str1=strrev(str1);
    str2=strrev(str2);
    if(strlen(str1)<strlen(str2))
    {
        strcpy(str4,str2);
        strcpy(str2,str1);
        strcpy(str1,str4);     
    }
        for(i=0;i<strlen(str2);i++)
        {
            num=(int)str1[i]+(int)str2[i]-96+carry;
            str3[i]=(char)(num%10+48);
            carry=num/10;
        }
        if(strlen(str1)!=strlen(str2))
        {
            for(i=strlen(str2);i<strlen(str1);i++)
            {
                num=(int)str1[i]-48+carry;
                str3[i]=(char)(num%10+48);
                carry=num/10;
                if((i==strlen(str1)-1))
                {
                    if(num>9)
                    str3[++i]=(char)(carry+48);
                    str3[++i]='\0';
                }
            }
        }
        else
        {
            if(num>9)
            str3[i]=(char)(carry+48);
            str3[++i]='\0';
        }
        display(str3);
    
}
void difference(char str1[40],char str2[40])
{
    char str3[40];
    char str4[40];
    int carry=0,i,num;
    if(strlen(str2)>strlen(str1))
    {
        strcpy(str4,str2);
        strcpy(str2,str1);
        strcpy(str1,str4); 
    }
    if((strcmp(str2,str1)>0)&&(strlen(str1)==strlen(str2)))
    {
        strcpy(str4,str2);
        strcpy(str2,str1);
        strcpy(str1,str4); 
    }
    str1=strrev(str1);
    str2=strrev(str2);
    for(i=0;i<strlen(str2);i++)
    {
        num=(int)str1[i]-(int)str2[i]-carry;
        if(num<0)
        {
            carry=1;
            num=num+10;
            str3[i]=(char)(num+48);
        }
        else
        {
            carry=0;
            str3[i]=(char)(num+48);
        }
    }
    if(strlen(str2)!=strlen(str1))
    {
        for(i=strlen(str2);i<strlen(str1);i++)
        {
            num=(int)str1[i]-48-carry;
            if(num<0)
            {
                carry=1;
                num=num+10;
                str3[i]=(char)(num+48);
            }
            else
            {
                carry=0;
                str3[i]=(char)(num+48);
            }
        }
        str3[i]='\0';
    }
    else
    {
        str3[i]='\0';
    }
    display(str3);
}
void display(char str[40])
{
    printf("the resultant is=");
    str=strrev(str);
    puts(str);
}
int main()
{
    int choice;
    printf("1->Sum\n2->difference\n");
    printf("enter choice:-");
    scanf("%d",&choice);
    fflush(stdin);
    input(choice);
    return 0;
}