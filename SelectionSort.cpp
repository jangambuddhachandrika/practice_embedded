#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Find the minimum element in unsorted part
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the first element of unsorted part
        if(minIndex != i)
            swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: \n";
    printArray(arr, size);
    
    selectionSort(arr, size);
    
    cout << "Sorted array: \n";
    printArray(arr, size);

    return 0;
}
