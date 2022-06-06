#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int arr[10][10];
    int arr1[10][10];
    int n,m;
    printf("enter the rows & columns of the array \n");
    scanf("%d%d",&n,&m);
    printf("enter the elements of the array:-\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&arr[i][j]);
    }
    printf("the given array is:-\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        printf("%d\t",arr[i][j]);
        printf("\n");
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {    
            arr1[i][j]=arr[i][j];
        }
    }
    printf("the new array transposed is:-\n");
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        printf("%d\t",arr1[i][j]);
        printf("\n");
    }
    return 0;
}