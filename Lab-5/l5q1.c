#include<stdio.h>
#include<string.h>
    int main(){
    char str[20];
    int i;
    printf("Enter a string: ");
    scanf("%s",str);
    for( i=0;str[i]!='\0';i++);
    printf("\n length of string : %d ",i);
}
