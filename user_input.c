//user input:-
# include <stdio.h>

int main()
{
    int age;
    printf("what is your age?\n");
    scanf("%d",&age);
    printf("you are %d years old\n",age);
    
    char grade;
    printf("what grade did you get?\n");
    scanf("%c",&grade);
    printf("i got an %c grade\n", grade);

    char name[25];
    printf("what is your name?\n");
    scanf("%s", &name);
    printf("my name is %s\n", name);

    
    
    return 0;
}