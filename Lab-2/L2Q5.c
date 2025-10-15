#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);
    if(a>20000){
        b=a*0.15;
    }else if(a>10000){
        b=a*0.10;
    }else{
        b=a*0.05;
    }
    printf("Net Sales=%.2f",a-b);
    return 0;
}
