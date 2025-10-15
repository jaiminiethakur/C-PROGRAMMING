#include <stdio.h>

int main()
{
    int i, n = 10;
    float value, sum = 0, mean;

    printf("Enter 10 values:\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &value);
        sum += value;
    }

    mean = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
}
