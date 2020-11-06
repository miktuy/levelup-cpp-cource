#include <stdio.h>

int main()
{
    int number = 0;
    int number_length = 1;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Length of `%d` is ", number);
    while ((number /= 10) > 0)
    {
        ++number_length;
    }
    printf("`%d`\n", number_length);
    return 0;
}