#include <iostream>

void merge(int* arr, int left, int mid, int right);
void mergeSort(int* arr, int left, int right);
void printArray(const char* const comment, int* arr, const int size);

int main() {
    int arr[] = { 59, 54, 7, 19, 3, 25, 87, 1, 0, 267 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printArray("Source array:", arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printArray("Sorted array:", arr, arr_size);

    return 0;
}

void merge(int* arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int* arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void printArray(const char* const comment, int* arr, const int size) {
    const char format = ' ';
    std::cout << comment; 
    for (int i = 0; i < size; i++) {
        std::cout << format << arr[i];
    }
    std::cout << std::endl;  
}
