#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 1; i <= 100; i++)
    {
        (i % 13 == 0) ? (sum += i) : 0;
    }

    printf("Sum of numbers divisible by 13 between 1 and 100 is %d\n", sum);
}
