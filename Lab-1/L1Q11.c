
#include<stdio.h>

int main()
{
    float grams, kg;
    printf("Enter grams: ");
    scanf("%f", &grams);
    kg = grams / 1000;
    printf("Kg: %.2f\n", kg);

}
