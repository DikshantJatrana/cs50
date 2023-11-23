#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char *s;
    s = malloc(50);
    printf("enter the string :- ");
    scanf("%s",s);

    int n = strlen(s)+1;
    char *t = malloc(n);

    for(int i=0;i<n;i++)
    {
        t[i]=s[i];
    }

    if(n>0)
    {
        t[0]=toupper(t[0]);
    }

    printf("s : %s\n",s);
    printf("t : %s\n",t);
}