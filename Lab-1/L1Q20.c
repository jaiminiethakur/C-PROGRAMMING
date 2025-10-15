include<stdio.h>

int main()
{
    float h, l;
    printf("Enter height and base: ");
    scanf("%f %f", &h, &l);
    printf("Area: %.2f\n", (h * l) / 2);
}
