#include <iostream>
using namespace std;


int countItems(int arr[], int n) {
    if (n == 0)
        return 0; 
    return 1 + countItems(arr, n-1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of items in the array: " << countItems(arr, n) << endl;

    return 0;
}
