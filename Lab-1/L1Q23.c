include<stdio.h>

int main()
{
    float a, b, c, avg;
    printf("Enter three subjects scores: ");
    scanf("%f %f %f", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("Average: %.2f, Total: %.2f\n", avg, a + b + c);
}
