#include<stdio.h>

int main(int agrc,str agrv[])
{
    if(agrc != 2)
    {
        printf("missing command line error!");
        return 1;
    }
    else
    {
        printf("hello %s",agrv[1]);
        return;
    }
}