#include <stdio.h>
#include <ctype.h>

void toUpperCase(char str[]) {
    int i = 0;
    while (str[i]) {
        str[i] = toupper((unsigned char)str[i]);
        i++;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    toUpperCase(str);

    printf("Uppercase string: %s\n", str);
    return 0;
}
