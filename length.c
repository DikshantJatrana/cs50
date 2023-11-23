#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    printf("enter the string :-");
    scanf("%s",name);

    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count+=1;
    }
    printf("length of string is %d\n",count);
    int n = strlen(name);
    printf("%i\n",n);
}