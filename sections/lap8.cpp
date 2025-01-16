#include <iostream>
using namespace std;

void arrprint(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "the printed array is : \n";
    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }
}

int sumofarray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
void arrdouble(int array[], int n) {
    cout << "the printed double array is : \n";
    for (int i = 0; i < n; i++) {
        cout << array[i]*2 << endl;
    }
}
void arrreverse(int array[], int n) {
    cout << "The reversed array is: \n";
    for (int i = n - 1; i >= 0; i--) {
        cout << array[i] << endl;
    }
}
void printMatrix(int array[2][3]) {
    cout << "The matrix is: \n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements: " << endl;
    arrprint(arr, n);

    int sum = sumofarray(arr, n);
    cout << "Sum of array elements: " << sum << endl;
    arrdouble(arr, n);
    arrreverse(arr, n);
     int matrix[2][3];
    cout << "Enter 6 elements for the matrix: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    printMatrix(matrix);
    return 0;
}

