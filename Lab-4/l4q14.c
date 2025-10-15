#include <stdio.h>

int main() {
    int arr[20]; // Allow up to 20 elements
    int n, num;

    // Input number of elements (max 19 to leave space for new one)
    printf("Enter number of elements (max 19): ");
    scanf("%d", &n);

    if(n < 1 || n > 19) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Input the new number to insert at the end
    printf("\nEnter the number to insert at the last position: ");
    scanf("%d", &num);

    // Insert at last position (index n)
    arr[n] = num;
    n++; // Increment size

    // Print updated array
    printf("\nArray after inserting at the end:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
