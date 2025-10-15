#include <stdio.h>

int main() {
    int arr[11];  // Size increased to 11 to hold new element
    int n = 10;   // Original number of elements
    int newNumber;

    // Input 10 elements
    printf("Enter 10 elements:\n");
    for(int i = 1; i <= n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Input the new number to insert at the beginning
    printf("\nEnter the new number to insert at the beginning: ");
    scanf("%d", &newNumber);

    // Insert at beginning
    arr[0] = newNumber;

    // Print the new array
    printf("\nArray after insertion:\n");
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
