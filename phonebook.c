#include<stdio.h>
#include<string.h>

typedef struct person
{
    char name[50];
    int number;
}person;

int main()
{
    person people[3];
    strcpy(people[0].name = "Dikshant";)
    people[0].number = 9350923230;

    strcpy(people[1].name = "muskan";)
    people[1].number = 9090909090;

    char string[100];
    printf("enter name :- ");
    scanf("%s",string);
    for(int i=0;i<2;i++)
    {
        if(strcmp(people[i].name,string)==0)
        {
            printf("%d",people[i].number);
            break;
        }
    }
    printf("NOT FOUND");
    return 1;
    
}