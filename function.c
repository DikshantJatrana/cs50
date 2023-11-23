#include<stdio.h>

int sum(int a,int b);
int minus(int a,int b);
int multi(int a,int b);
int divide(int a,int b);

int main()
{
    int a,b;
    printf("enter first number :- ");
    scanf("%d",&a);
    printf("enter second number :- ");
    scanf("%d",&b);

    printf("%d\n",sum(a,b));
    printf("%d\n",minus(a,b));
    printf("%d\n",multi(a,b));
    printf("%d\n",divide(a,b));
}

int sum(int a,int b)
{
    int c =a+b;
    return c;
}

int minus(int a,int b)
{
    int c = a-b;
    return c;
}

int multi(int a,int b)
{
    int c=a*b;
    return c;
}

int divide(int a,int b)
{
    int c =a/b;
    return c;
}