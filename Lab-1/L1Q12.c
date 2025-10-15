
#include<stdio.h>

int main()
{
    float kg, grams;
    printf("Enter kg: ");
    scanf("%f", &kg);
    grams = kg * 1000;
    printf("Grams: %.2f\n", grams);
}
