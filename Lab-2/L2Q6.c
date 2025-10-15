#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d",&a,&b,&x);
    y=a+b+x;
    float z=y/3.0;
    printf("Total=%d\nAverage=%.2f\n",y,z);
    if(z>=70){
        printf("Distinction");
    }else if(z>=60){
        printf("First");
    }else if(z>=50){
        printf("Second");
    }else if(z>=35){
        printf("Third");
    }else{
        printf("Fail");
    }
    return 0;
}
