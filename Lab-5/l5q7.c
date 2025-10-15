#include<stdio.h>
#include<string.h>

int main() {
  char str[20];
  printf("Enter a string: ");
  scanf("%s", str);

  int length = strlen(str);
  int start=0;
  int end=length - 1;

  while(start<end)
  {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }

  printf("The reverse of the string is %s\n", str);
}
