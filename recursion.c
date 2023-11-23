#include<stdio.h>

void drew(int n);

int main()
{
    int n;
    printf("enter the height of pattern :-");
    scanf("%d",&n);

    drew(n);
}

void drew(int n)
{
    if (n>=0)
    {
        for(int i=0;i<n;i++)
        {
            printf("#");
        }
        printf("\n");
    }
    drew(n+1);
}