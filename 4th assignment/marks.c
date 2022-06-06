#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][15];
    int roll[10];
    int a[10];
    int b[10];
    int c[10];
    int d[10];
    int e[10];
    for(int i=0;i<10;i++)
    {
        printf("enter credentials of student %d:= i.e, name roll no and marks in 5 subjects\n",i+1);
        gets(name[i]);
        fflush(stdin);
        scanf("%d",&roll[i]);
        fflush(stdin);
        scanf("%d",&a[i]);
        fflush(stdin);
        scanf("%d",&b[i]);
        fflush(stdin);
        scanf("%d",&c[i]);
        fflush(stdin);
        scanf("%d",&d[i]);
        fflush(stdin);
        scanf("%d",&e[i]);
        fflush(stdin);
    }
    int n1,n2,max1=0,max2=0;
    for(int i=0;i<10;i++)
    {
        if(max1<a[i])
        {
            max1=a[i];
            n1=i;
        }
    }
    printf("the student who got highest marks in subject A is %s roll no-%d marks -%d\n",name[n1],roll[n1],max1);
    for(int i=0;i<10;i++)
    {
        if((a[i]>max2)&&(a[i]<max1))
        {
            max2=a[i];
            n2=i;
        }
    }
    printf("the student who got 2nd highest marks in subject A is %s roll no-%d marks -%d\n",name[n2],roll[n2],max2);
    max1=0;
    max2=0;
    for(int i=0;i<10;i++)
    {
        if(max1<b[i])
        {
            max1=b[i];
            n1=i;
        }
    }
    printf("the student who got highest marks in subject B is %s roll no-%d marks -%d\n",name[n1],roll[n1],max1);
    for(int i=0;i<10;i++)
    {
        if((b[i]>max2)&&(b[i]<max1))
        {
            max2=b[i];
            n2=i;
        }
    }
    printf("the student who got 2nd highest marks in subject B is %s roll no-%d marks -%d\n",name[n2],roll[n2],max2);
    max1=0;
    max2=0;
    for(int i=0;i<10;i++)
    {
        if(max1<c[i])
        {
            max1=c[i];
            n1=i;
        }
    }
    printf("the student who got highest marks in subject C is %s roll no-%d marks -%d\n",name[n1],roll[n1],max1);
    for(int i=0;i<10;i++)
    {
        if((c[i]>max2)&&(c[i]<max1))
        {
            max2=c[i];
            n2=i;
        }
    }
    printf("the student who got 2nd highest marks in subject C is %s roll no-%d marks -%d\n",name[n2],roll[n2],max2);
    max1=0;
    max2=0;
    for(int i=0;i<10;i++)
    {
        if(max1<d[i])
        {
            max1=d[i];
            n1=i;
        }
    }
    printf("the student who got highest marks in subject D is %s roll no-%d marks -%d\n",name[n1],roll[n1],max1);
    for(int i=0;i<10;i++)
    {
        if((d[i]>max2)&&(d[i]<max1))
        {
            max2=d[i];
            n2=i;
        }
    }
    printf("the student who got 2nd highest marks in subject D is %s roll no-%d marks -%d\n",name[n2],roll[n2],max2);
    max1=0;
    max2=0;
    for(int i=0;i<10;i++)
    {
        if(max1<e[i])
        {
            max1=e[i];
            n1=i;
        }
    }
    printf("the student who got highest marks in subject E is %s roll no-%d marks -%d\n",name[n1],roll[n1],max1);
    for(int i=0;i<10;i++)
    {
        if((e[i]>max2)&&(e[i]<max1))
        {
            max2=e[i];
            n2=i;
        }
    }
    printf("the student who got 2nd highest marks in subject E is %s roll no-%d marks -%d\n",(name[n2]),roll[n2],max2);
    return 0;
}