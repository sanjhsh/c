/*arithmatic operators:
+= addition
-= substraction 
*= multiplication
/= division
%= modulus
++= increment
--= decrement*/
#include <stdio.h>
int main(){

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
    return 0;
}


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
