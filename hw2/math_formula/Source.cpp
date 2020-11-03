#include <stdio.h>
#include <math.h>

const double PI = 3.14;


int main(void)
{
    double x, y, up_part, down_part;
    printf("Enter x value: ");
    scanf_s("%lf", &x);
    up_part = 2 * cos(x - PI / 6) + sqrt(2);
    down_part = 1 / (2 * log(x)) + pow(sin(x * x), 2);
    y = up_part * exp(3 * x) / down_part;
    printf("Result is `%f`\n", y);
    return 0;
}