include<stdio.h>

int main()
 {
    float p, r, i;
    printf("Enter Principal, Rate: ");
    scanf("%f %f", &p, &r);
    i = (p * r) / 100;
    printf("Interest: %.2f\n", i);
}
