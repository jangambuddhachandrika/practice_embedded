#include <iostream>
using namespace std;

// Recursive function to find the maximum element in an array
int findMax(int arr[], int n) {
    // Base case: if array has only one element, return that element
    if (n == 1)
        return arr[0];

    // Recursively find the maximum of the remaining elements
    int maxOfRest = findMax(arr, n - 1);

    // Compare the last element with the maximum of the rest of the array
    return (arr[n - 1] > maxOfRest) ? arr[n - 1] : maxOfRest;
}

int main() {
    int arr[] = {12, 3, 45, 7, 34, 56, 9};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    cout << "The maximum number in the array is: " << findMax(arr, n) << endl;

    return 0;
}
