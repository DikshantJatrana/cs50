#include<stdio.h>

int main(void)
{
    char *s ="DJ!";
    printf("%p\n",s);
    printf("%p\n",(s+1));
    printf("%p\n",(s+2));
}