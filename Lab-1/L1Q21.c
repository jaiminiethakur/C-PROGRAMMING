
include<stdio.h>

int main()
{
    float gross, allowance, deduction, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);
    allowance = gross * 0.10; // 10% allowance
    deduction = gross * 0.03;  // 3% deduction
    net = gross + allowance - deduction;
    printf("Net Salary: %.2f\n", net);
}
