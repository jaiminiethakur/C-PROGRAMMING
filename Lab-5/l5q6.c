#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from fgets input
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Both strings are the same.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically lower than the second string.\n");
    } else {
        printf("The first string is lexicographically greater than the second string.\n");
    }

    return 0;
}
