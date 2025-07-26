#include <stdio.h>

int main()
{
    const double pi= 3.1415926;
    double radius;
    double circumference;

    printf("enter the radius of the circle:\n");
    scanf("%lf", &radius);
    

    circumference= 2*pi* radius;
    printf("circumference=%lf",circumference);

    return 0;
}











