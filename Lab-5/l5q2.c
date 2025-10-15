#include <stdio.h>
#include <ctype.h>

void toLowerCase(char str[]) {
    int i = 0;
    while (str[i]) {
        str[i] = tolower((unsigned char)str[i]);
        i++;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    toLowerCase(str);

    printf("Lowercase string: %s\n", str);
    return 0;
}
