#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int l;
    printf("enter the length of the array=");
    scanf("%d",&l);
    arr=(int*)calloc(l,sizeof(int));
    printf("enter the elements of the array:-\n");
    for(int i=0;i<l;i++)
    scanf("%d",&arr[i]);
    int temp;
    for(int i=0;i<l-1;i++)
    {
        for(int i=0;i<l-1;i++)
        {    
            if(arr[i]>arr[i+1])
            {
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("the new array is:-\n");
    for(int i=0;i<l;i++)
    printf("%d\t",arr[i]);
    return 0;
}