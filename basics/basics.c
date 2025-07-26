//- single line comment

/*- multiline
comment
*/

/*escape seqence= character combining consisting of a backslash \
followed by letter or combination of digits.
they specify actions within a line or strimg of text.
\n= newline
\t= tab(spacing between the characters*/

# include <stdio.h>
int main(){
    int int1= 24;
    float float1= 2.4;
    char character1= 'A';
    char character2[]= "shakti";
    float float2= 2.1234;
    double double1= 2.12345678;

    printf("i am %d years old\n",int1);
    printf("i am %f inch taller then you\n",float1);
    printf("i got %c grade in my previous exam\n",character1);
    printf("my name is %s\n",character2);
    

/*types of variable:
1) integer type (int)
2) float type (float)
3)single charater (char)
4) string/ series of characters(char [])
*/

/*formate specifiers:
%c= character
%s= string
%f= float
%lf= double
%d= integer
%0.1= decimal precision
%1= minimum feild width 
%-= left allign*/

    printf("0.2%f\n",float2);
    printf("%0.7lf\n",double1);
    return 0;
}
