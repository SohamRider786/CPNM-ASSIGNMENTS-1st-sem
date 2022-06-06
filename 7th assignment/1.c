#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct student
{
    int roll_no;
    char name[30];
    char department[35];
    char course[36];
    int year_of_joining;
    int marks[6];
};
void input(struct student p[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nenter the details of the student no %d:-\n",i+1);
        fflush(stdin);
        printf("roll number=");
        scanf("%d",&p[i].roll_no);
        fflush(stdin);
        printf("name=");
        gets(p[i].name);
        fflush(stdin);
        printf("department=");
        gets(p[i].department);
        fflush(stdin);
        printf("course=");
        gets(p[i].course);
        fflush(stdin);
        printf("year of joining=");
        scanf("%d",&p[i].year_of_joining);
        printf("marks in six subjects repectively");
        for(int j=0;j<6;j++)
        {
            scanf("%d",&p[i].marks[j]);
        }
    }
}
void data_of_student(int rollnum,struct student s[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].roll_no==rollnum)
        {
            c=1;
            printf("the data of the student with roll number %d is:\n",rollnum);
            printf("roll number=");
            printf("%d",s[i].roll_no);
            printf("\nname=");
            puts(s[i].name);
            printf("department=");
            puts(s[i].department);
            printf("course=");
            puts(s[i].course);
            printf("year of joining=");
            printf("%d",s[i].year_of_joining);
            printf("\nmarks in six subjects repectively:-\n");
            for(int j=0;j<6;j++)
            {
                printf("%d\t",s[i].marks[j]);
            }
        }
    }
    if(c==0)
    printf("\nthe student with this roll number %d could not be found in the database",rollnum);
}
void copy_data_to_file(FILE * ptr,struct student  s[],int n)
{
    ptr=NULL;
    ptr=fopen("file.txt","a+");
    for(int i=0;i<n;i++)
    {
        fprintf(ptr,"\nthe details of student number %d is:-\n",i+1);
        fprintf(ptr,"%s","roll no=");
        fprintf(ptr,"%d",s[i].roll_no);
        fprintf(ptr,"%s","\nname=");
        fprintf(ptr,"%s",s[i].name);
        fprintf(ptr,"%s","\ndepartment=");
        fprintf(ptr,"%s",s[i].department);
        fprintf(ptr,"%s","\ncourse=");
        fprintf(ptr,"%s",s[i].course);
        fprintf(ptr,"\nyear of joining=%d",s[i].year_of_joining);
        fprintf(ptr,"%s","\nmarks in six subjects respectively:-\t");
        for(int j=0;j<6;j++)
        {
            fprintf(ptr,"\t%d",s[i].marks[j]);
        }
    }
    fclose(ptr);
}
void print_ranked_list(struct student s[],int n)
{
    int avg_marks[30];
    int unsorted_array[30];
    int temp,c=0,sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            sum1=sum1+s[i].marks[j];
            sum2=sum2+s[i].marks[j];
        }
        avg_marks[i]=sum1/6;
        unsorted_array[i]=sum2/6;
        sum1=0;
        sum2=0;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(avg_marks[i]>avg_marks[i+1])
            {
                temp=avg_marks[i+1];
                avg_marks[i+1]=avg_marks[i];
                avg_marks[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(avg_marks[i]==unsorted_array[j])
            {
                printf("\nrank %d, details are as follows:-\n",++c);
                printf("roll number=");
                printf("%d",s[j].roll_no);
                printf("\nname=");
                puts(s[j].name);
                printf("department=");
                puts(s[j].department);
                printf("course=");
                puts(s[j].course);
                printf("year of joining=");
                printf("%d",s[j].year_of_joining);
                printf("\nmarks in six subjects repectively:-\n");
                for(int k=0;k<6;k++)
                {
                    printf("%d\t",s[j].marks[k]);
                }
            } 
        }
    }
}
int main()
{
    struct student s[100];
    int n;
    char choice;
    int roll_num;
    FILE *ptr=NULL;
    printf("enter the number of students=");
    scanf("%d",&n);
    fflush(stdin);
    input(s,n);
    fflush(stdin);
    printf("enter the choice=");
    scanf("%c",&choice);
    switch(choice)
    {
        case 'a':
        printf("enter the roll number to be searched=");
        scanf("%d",&roll_num);
        data_of_student(roll_num,s,n);
        break;
        case 'b':
        copy_data_to_file(ptr,s,n);
        break;
        case 'c':
        printf("RANK LIST");
        print_ranked_list(s,n);
        break;
        default:
        printf("invalid choice");
        break;
    }
    return 0;
}
