#include <stdio.h>

int main()
{
    int first ,second;
    printf("enter 1st number :- ");
    scanf("%d",&first);
    printf("enter 2nd number :- ");
    scanf("%d",&second);

    if(first>second)
    {
        printf("%d is greater than %d\n",first ,second);
    }
    else if(first<second)
    {
        printf("%d is greater than %d\n",second,first);
    }
    else
    {
        printf("both are equal\n");
    }
}