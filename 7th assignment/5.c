#include<stdio.h>
#include<math.h>
#include<string.h>
struct entries
{
    char name[30];
    int n;
    double ph_nos[2];
};
void input(struct entries a[],int m)
{
    for(int i=0;i<m;i++)
    {
        printf("enter the name of the number bearer=");
        gets(a[i].name);
        fflush(stdin);
        printf("enter the number of numbers the bearer has=");
        scanf("%d",&a[i].n);
        fflush(stdin);
        for(int j=0;j<a[i].n;j++)
        {
            printf("enter the %dth number=",j+1);
            scanf("%lf",&(a[i].ph_nos[j]));
            fflush(stdin);
        }
    }
}
int add_contact(struct entries a[],int m)
{
    printf("enter the details:-\n");
    printf("enter the name of the number bearer=");
    fflush(stdin);
        gets(a[m].name);
        printf("enter the number of numbers the bearer has=");
        scanf("%d",&a[m].n);
        for(int j=0;j<a[m].n;j++)
        {
            printf("enter the %dth number=",j+1);
            scanf("%lf",&(a[m].ph_nos[j]));
        }
        return ++m;
}
int delete_contact(struct entries a[],int m)
{
    double temp1,temp2;
    char name_del[30];
    printf("enter the name of the guy whoes number is to be deleted=");
    fflush(stdin);
    gets(name_del);
    for(int i=0;i<m;i++)
    {
        if(strcmp(name_del,a[i].name)==0)
        {
            printf("the contact to be deleted has been found\n");
            
            for(int j=i;j<m;j++)
            {
                strcpy(a[j].name,a[j+1].name);
                a[j].n=a[j+1].n;
                for(int k=0;k<a[j].n;k++)
                {
                    a[j].ph_nos[k]=a[j+1].ph_nos[k];
                }
            }
            m--;
            i--;
        }
    }
    return m;
}
void put_directory_to_file(struct entries a[],int m)
{
    FILE *ptr=NULL;
    ptr=fopen("telephone.txt","w+");
    for(int i=0;i<m;i++)
    {
        fprintf(ptr,"name=%s",a[i].name);
        fprintf(ptr,"\nnumber of numbers the bearer has=%d",a[i].n);
        fprintf(ptr,"\n%s\n","the phone numbers are:-");
        for(int j=0;j<a[i].n;j++)
        {
            fprintf(ptr,"%0.0lf\n",a[i].ph_nos[j]);
        }
    }
    fclose(ptr);
}
void search_contact(struct entries a[],int m)
{
    char name_search[30];
    printf("enter the name to be searched=");
    fflush(stdin);
    gets(name_search);
    for(int i=0;i<m;i++)
    {
        if(strcmp(name_search,a[i].name)==0)
        {
           printf("the name has been found\n");
           printf("the phone numbers are:-\n");
           for(int j=0;j<a[i].n;j++)
           {
               printf("%.0lf\n",a[i].ph_nos[j]);
           }
        }
    }
}
void browse_contacts(struct entries a[],int m)
{
    printf("the entries are as follows:-\n");
    for(int i=0;i<m;i++)
    {
        printf("the phone numbers are:-\n");
        printf("name=");
        puts(a[i].name);
        for(int j=0;j<a[i].n;j++)
        {
            printf("%.0lf\n",a[i].ph_nos[j]);
        }
    }
}
int main()
{
    struct entries a[100];
    int m;
    char c;
    printf("enter the number of entries you want");
    scanf("%d",&m);
    fflush(stdin);
    input(a,m);
    fflush(stdin);
    printf("enter the choice=");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
        browse_contacts(a,add_contact(a,m));
        break;
        case 'b':
        browse_contacts(a,delete_contact(a,m));
        break;
        case 'c':
        search_contact(a,m);
        break;
        case 'd':
        browse_contacts(a,m);
        break;
        default:
        printf("invalid inputs");
        break;
    }
    printf("the details has been succesfully stored in a file");
    put_directory_to_file(a,m);
    return 0;
}