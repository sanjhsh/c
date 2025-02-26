//user input:-
# include <stdio.h>

int main()
{
    int age;
    printf("what is your age?\n");
    scanf("%d",&age);
    
    char grade;
    printf("what grade did you get?\n");
    scanf("%c",&grade);

    char name[25];
    printf("what is your name?\n");
    scanf("%s" ,name);

    printf("my name is %s\n", name);
    printf("i got %c grade\n", grade);
    printf("you are %d years old\n",age);

    char full_name[25];

    printf("what is your full name?");
    fgets(full_name,25,stdin);

    printf("my name is %s",full_name);
    return 0;
}