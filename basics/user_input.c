//user input:-
# include <stdio.h>
#include <string.h>

int main()
{
    int age;
    printf("what is your age?\n");
    scanf("%d",&age);
    
    char grade;
    printf("what grade did you get?\n");
    scanf(" %c",&grade);

    char name[25];
    printf("what is your name?\n");
    scanf("%s" ,name);

    char full_name[100];
    printf("what's your name?\n");
    fgets(full_name, 100, stdin);

    printf("your name is %s\n", name);
    printf("you got %c grade\n", grade);
    printf("you are %d years old\n",age);
    printf("your name is %s", full_name);

    return 0;
}