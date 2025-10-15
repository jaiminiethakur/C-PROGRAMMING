#include <stdio.h>

// Function to search for a value in the array
int searchValue(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;  // Return the index where the value is found
        }
    }
    return -1;  // Return -1 if the value is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int valueToFind = 30;

    int result = searchValue(arr, size, valueToFind);

    if (result != -1) {
        printf("Value %d found at index %d.\n", valueToFind, result);
    } else {
        printf("Value %d not found in the array.\n", valueToFind);
    }

    return 0;
}
