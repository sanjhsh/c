#include <stdio.h>
#include <math.h>

int main()
{
    double A = sqrt(16);
    double B = pow(2,10);
    int C = round(24.704);
    int D = ceil(4.25); // round up
    int E = floor(2.26); // round down
    double F = fabs(-424);
    double G= log(4);
    double H= sin(35);
    double I= cos(35);
    double J= tan(35);
    
    printf("%lf\n",A);
    printf("%lf\n",B);
    printf("%d\n",C);
    printf("%d\n",D);
    printf("%d\n",E);
    printf("%lf\n",F);
    printf("%lf\n",G);
    printf("%lf\n",H);
    printf("%lf\n",I);
    printf("%lf\n",J);

    return 0;
}