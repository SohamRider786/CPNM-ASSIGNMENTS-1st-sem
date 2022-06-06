#include<stdio.h>
#include<stdlib.h>
int main()
{
    int * arr=NULL;
    int n,d,c=0;
    printf("enter the number of elements=");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    printf("enter the elements of the array");
    int l=n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                for(int k=j;k<l-1;k++)
                arr[k]=arr[k+1];
                l--;
                j--;
            }
        }
    }
    printf("the number of duplicate elements in the array = %d\n",c);
    printf("the new array is:-\n");
    for(int i=0;i<l;i++)
    printf("%d",arr[i]);
    int temp;
    for(int i=0;i<l/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[l-i-1];
        arr[l-i-1]=temp;
    }
    printf("\nthe new reversed array is:-\n");
    for(int i=0;i<l;i++)
    printf("%d",arr[i]);
    free(arr);
    return 0;
}