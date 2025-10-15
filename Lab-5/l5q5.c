#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, world!";
    char destination[50];  // Make sure destination has enough space

    strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
