#include <stdio.h>

// Function to delete the first occurrence of a value from the array
int deleteValue(int arr[], int size, int value) {
    int i, pos = -1;

    // Find the position of the value to delete
    for (i = 0; i < size; i++) {
        if (arr[i] == value) {
            pos = i;
            break;
        }
    }

    // If value not found, return original size
    if (pos == -1) {
        printf("Value %d not found in array.\n", value);
        return size;
    }

    // Shift elements to the left to overwrite the deleted element
    for (i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Return new size (one less)
    return size - 1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int valueToDelete = 30;

    printf("Original array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    size = deleteValue(arr, size, valueToDelete);

    printf("Array after deleting %d: ", valueToDelete);
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
