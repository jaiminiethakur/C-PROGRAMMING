#include<stdio.h>

int main()
 {
    float dollars, rs, pounds;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    rs = dollars * 48;
    pounds = rs / 70; // 1 pound = 70 Rs
    printf("Pounds: %.2f\n", pounds);
}
