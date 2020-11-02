#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

const double PI = 3.14;
const double TRIANGLE_AREA_COEF = sqrt(3) / 4;

double getCircleArea(double r)
{
    return PI * r * r;
}

double getSquareArea(double d)
{
    return d * d;
}

double getEquilateralTrianlgeArea(double a)
{
    return TRIANGLE_AREA_COEF * a * a;
}

int main(void)
{
    double r, circle_area;
    double a, triangle_area;
    double d, square_area;
    double max_area;

    printf("Enter circle radius: ");
    scanf("%lf", &r);
    circle_area = getCircleArea(r);
    printf("Circle area is %f\n", circle_area);

    printf("Enter triangle side: ");
    scanf("%lf", &a);
    triangle_area = getEquilateralTrianlgeArea(a);
    printf("Triangle area is %f\n", triangle_area);

    printf("Enter square side: ");
    scanf("%lf", &d);
    square_area = getSquareArea(d);
    printf("Square area is %f\n", square_area);

    max_area = (circle_area > triangle_area) ? circle_area : triangle_area;
    max_area = (max_area > square_area) ? max_area : square_area;


    printf("Max area is %f\n", max_area);

    return 0;
}