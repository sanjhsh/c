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



/*arithmatic operators:
+= addition
-= substraction 
*= multiplication
/= division
%= modulus
++= increment
--= decrement*/

int num1 = 7;
int num2 = 2;
int num3 = num1/num2;
printf("%d\n",num3);

int num4 = 7;
float num5= 2;
int num6 = num4/num5;
printf("%d\n",num6);


int num7 = 7;
float num8 = 2;
float num9 = num7/num8;
printf("%f\n",num9);

int num10 =7;
int num11= 2;
float num12= num10/num11;
printf("%f\n",num12);

float num13 =7;
float num14= 2;
int num15= num13/num14;
printf("%d\n",num15);

float num16=7;
int num17=2;
int num18= num16/num17;
printf("%d\n",num18);

float num19=7;
int num20=2;
float num21= num19/num20;
printf("%f\n",num21);

float num22=7;
float num23=2;
float num24= num22/num23;
printf("%f\n",num24);


/* agumented assignment operators= used to a statements where an operator 
takes a variable as one of its arguments 
and then assigns the result back to the same variable 
x= x+1
x+=1

y=y-1
y-=1

z=z/2
z/=2

w=*2
w*=2
*/

//user input:-
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