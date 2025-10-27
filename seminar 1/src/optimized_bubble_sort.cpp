#include "../include/optimized_bubble_sort.h"

template <typename T>
void optimizedBubbleSort(T arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

template void optimizedBubbleSort<int>(int arr[], int n);
template void optimizedBubbleSort<double>(double arr[], int n);
