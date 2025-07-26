/* switch = A more efficient alternative to using many "else if "
    statements allows a value to be tested
    for equality against many cases*/

/* using strings in switch statements is not reccomended 
todo: try using string for evaluation in swtich statements 

*/
#include<stdio.h>
#include<ctype.h>

int main(){

    char grade;
    printf("enter your grade:\n");
    scanf("%c", &grade); 
    
    grade= toupper(grade);

    switch (grade){
        case 'A':
            printf("you have got 95+ percentage");
        break;

        case 'B':
            printf("you have got 85+ percentage");
            break;

        case 'C':
            printf("you have got 75+ percent");
            break;

        case 'D' :
            printf("you got 60+ percent");
            break;

        case 'E':
            printf("you got 55+ percentage");
            break;

        default:
            printf("Invalid input");
            break;
        
    }
    return 0;
}