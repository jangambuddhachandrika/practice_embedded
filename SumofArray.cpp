#include <bits/stdc++.h>

using namespace std;

int sumOfArray(int arr[],int n)
{
    if(n<=0)
    {
        return 0;
    }
    else
    {
        return arr[n-1]+sumOfArray(arr,n-1);
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of array elements: " << sumOfArray(arr, n) << endl;

    return 0;
}