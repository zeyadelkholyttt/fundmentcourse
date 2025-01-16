#include <iostream>
#include <ostream>

int *arrinpute(int array[], int n) {
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    return array;
}

int *boubleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

void printarray(int array[], int n) {
    std::cout << "The sorted array is:\n";
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int binarSearch(int arr[], int target, int start, int end) {
    if (start > end) {
        return -1;
    }
    int middle = (start + end) / 2;
    if (arr[middle] == target) {
        return middle;
    }
    if (arr[middle] > target) {
        return binarSearch(arr, target, start, middle - 1);
    }
    return binarSearch(arr, target, middle + 1, end);
}

int main() {
    std::cout << "Enter the size of the array: ";
    int n;
    std::cin >> n;
    
    int arr[n];
    std::cout << "Enter " << n << " numbers: ";
    arrinpute(arr, n);

    boubleSort(arr, n);
    printarray(arr, n);

    std::cout << "Enter a number to search: ";
    int target;
    std::cin >> target;

    int result = binarSearch(arr, target, 0, n - 1);
    if (result != -1) {
        std::cout << "Number found at index: " << result << std::endl;
    } else {
        std::cout << "Number not found in the array." << std::endl;
    }

    return 0;
}

