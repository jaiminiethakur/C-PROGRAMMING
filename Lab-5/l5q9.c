#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "world!";

    strcat(str1, str2);  // Append str2 at the end of str1

    printf("Concatenated string: %s\n", str1);

    return 0;
}
