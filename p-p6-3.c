#include <stdio.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size == 0) {
        printf("Array is empty.\n");
        return 0;
    }

    int max_element = arr[0]; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    printf("Maximum element in the array: %d\n", max_element);

    return 0;
}
