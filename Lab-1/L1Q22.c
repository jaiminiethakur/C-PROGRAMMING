include<stdio.h>

int main()
{
    float grossSales, net;
    printf("Enter gross sales: ");
    scanf("%f", &grossSales);
    net = grossSales - (grossSales * 0.10); // 10% discount
    printf("Net Sales: %.2f\n", net);
}
