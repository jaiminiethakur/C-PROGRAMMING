#include <stdio.h>
#include <ctype.h>

void toggleCase(char str[]) {
    int i = 0;
    while (str[i]) {
        if (islower((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
        } else if (isupper((unsigned char)str[i])) {
            str[i] = tolower((unsigned char)str[i]);
        }
        i++;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    toggleCase(str);

    printf("Toggled case string: %s\n", str);
    return 0;
}
