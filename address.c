#include<stdio.h>

int main()
{
    int n = 4;
    int *p = &n;
    printf("the number is %d\n",*p);
    printf("the address of number is %p\n",p);
}