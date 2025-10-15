 #include <stdio.h>

int main()
{
    int i, n;
    float value, sum = 0, mean;

    printf("Enter number of values: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &value);
        sum += value;
    }

    mean = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
}
