#include <stdio.h>

int main()
{
    char ch;
    printf("ENTER YOUR CHOICE :- ");
    scanf("%c",&ch);

    if(ch == 'y' || ch == 'Y')
    {
        printf("agreed\n");
    }
    else if(ch =='n' || ch == 'N')
    {
        printf("disagree\n");
    }
    else
    {
        printf("incvalid!!");
    }
}