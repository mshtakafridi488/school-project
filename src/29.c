#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int size) {
    printf("Array contains %d elements: \n", size);
    if (size > 0) {
        for (int i = 0; i < size - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("The array is empty.\n");
    }
}

void sort_array(int arr[], int size, int compare_function) {
    if (size <= 1) {
        return;
    }

    int i = 0;
    while (i < size - 1) {
        for (int j = 0; j < size - 1; j++) {
            if (compare_function(arr[j], arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
        i++;
    }
}

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        compare_function(arr, size);
    }
}
