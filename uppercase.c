#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    printf("enter string :-");
    scanf("%s",name);
    printf("BEFORE : %s\n",name);

    printf("AFTER : ");
    for(int i=0;i<strlen(name);i++)
    {
        if(name[i] >='a' && name[i] <='z')
        {
            printf("%c",name[i]- 32);
        }
        else
        {
            printf("%c",name[i]);
        }        
    }
    printf("\n");
}