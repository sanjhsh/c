# include <stdio.h>

int main(){
char operation;
double num1;
double num2;

printf("enter num1:\n");
scanf("%lf",&num1);

printf("enter num2:\n");
scanf("%lf",&num2);

double result;


printf("enter the operation example adddition(+), substraction(-), division(/),or multiplication(*):\n");
scanf(" %c",&operation);

switch (operation){
    case '+':
        result = num1 + num2;
        printf("%lf",result);
    break;

    case '-':
        result= num1- num2;
        printf("%lf",result);
    break;

    case ('/'):
        result= num1/num2;
        printf("%lf", result);
    break;

    case '*':
        result= num1*num2;
        printf("%lf",result);
    break;

    default :
        printf("invalid input");
    break;

    }

return 0;
}