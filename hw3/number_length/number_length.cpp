#include <stdio.h>

int main()
{
    int number = 0;
    int number_length = 0;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Length of `%d` is ", number);
    while (number > 0)
    {
        number /= 10;
        ++number_length;
    }
    printf("`%d`\n", number_length);
    return 0;
}