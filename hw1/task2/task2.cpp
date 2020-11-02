#include <stdio.h>

int main(void)
{
    int a = 5;
    int b;
    int c = 5;
    int d;
    printf("Enter b value: ");
    scanf_s("%d", &b);
    printf("Enter d value: ");
    scanf_s("%d", &d);

    a = a + b - 2;
    printf("a+b-2=%d\n", a);

    c = c + 1;
    printf("c+1=%d\n", c);

    d = c - a + d;
    printf("c-a+d=%d\n", d);

    a = a * c;
    printf("a*c=%d\n", a);

    c = c - 1;
    printf("c-1=%d\n", c);

    a = a / 10;
    printf("a/10=%d\n", a);

    c = c / 2;
    printf("c/2=%d\n", c);

    b = b - 1;
    printf("b-1=%d\n", b);

    d = d * (c + b + a);
    printf("d*(c+b+a)=%d\n", d);

    return 0;
}