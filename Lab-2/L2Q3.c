#include<stdio.h>
int main() {
 float net_salary,gross_salary,allowance,deduction;
 printf("Enter the net_salary: ");
 scanf("%f",&net_salary);
 printf("Enter the gross_salary: ");
 scanf("%f",&gross_salary);
 printf("Enter the allowance: ");
 scanf("%f",&allowance);
 printf("Enter the deduction: ");
 scanf("%f",&deduction);

 if(gross_salary>10000)
 {
     allowance=gross_salary*0.10;
     deduction=gross_salary*0.03;
 }
 if(gross_salary>5000)
 {
     allowance=gross_salary*0.07;
     deduction=gross_salary*0.02;
 }
  net_salary=gross_salary+allowance-deduction;
  printf("The net_salary is,%f", net_salary);


 return 0;
}
