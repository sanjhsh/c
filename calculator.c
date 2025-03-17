# include <stdio.h>

int main(){
char operation;
double num1;
double num2;

printf("enter num1:\n");
scanf("%lf",&num1);

printf("enter num2:\n");
scanf("%lf",&num2);

double addition;
double substraction;
double division;  
double multiplication;


printf("enter the operation example adddition(+), substraction(-), division(/),or multiplication(*):\n");
scanf("%c",&operation);

switch (operation){
    case '+':
        addition = num1 + num2;
        printf("%lf",addition);
    break;

    case '-':
        substraction= num1- num2;
        printf("%lf",substraction);
    break;

    case '/':
        printf("%lf", division);
        division  = num1/ num2;
    break;

    case '*':
        printf("%lf",multiplication);
        multiplication = num1*num2;
    break;

    default :
        printf("invalid input");
    break;

    }

return 0;
}