#include<stdio.h>

int linear(int arr[],int n,int a);

int main()
{
    int n;
    printf("enter the number of elements :-");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the %d element :- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    int a;
    printf("enter the number you want to search :- ");
    scanf("%d",&a);
    
    if(linear(arr,n,a)==-1)
    {
        printf("NOT FOUND");
    }
    else
    {
        printf("found and index value is %d",linear(arr,n,a));
    }
}

int linear(int arr[],int n,int a)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            return i;
            return 0;
        }
    }
    return -1;
}
