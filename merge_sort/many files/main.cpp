#include <iostream>
#include "mergeSort.hpp"
#include "io.hpp"

int main() {
    int arr[] = {59, 54, 7, 19, 3, 25, 87, 1, 0, 267};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    biv::print_array("Source array:", arr, arr_size);
    biv::sort::mergeSort(arr, 0, arr_size - 1);
    biv::print_array("Sorted array:", arr, arr_size);

    return 0;
}
